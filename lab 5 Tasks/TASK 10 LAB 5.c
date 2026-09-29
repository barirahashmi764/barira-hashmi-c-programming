#include <stdio.h>
#include <math.h>

int main() {
    float accuracy, confidence, modelScore;
    int datasetSize;
    int userRole, modelStatus;
    int permission;

    // Input
    printf("Enter AI Model Accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter Confidence Score: ");
    scanf("%f", &confidence);

    printf("Enter Dataset Size: ");
    scanf("%d", &datasetSize);

    printf("\nUser Roles:\n");
    printf("1 = Admin\n");
    printf("2 = Developer\n");
    printf("3 = Researcher\n");
    printf("Enter User Role: ");
    scanf("%d", &userRole);

    printf("\nModel Status:\n");
    printf("1 = Ready\n");
    printf("2 = Testing\n");
    printf("3 = Training\n");
    printf("Enter Model Status: ");
    scanf("%d", &modelStatus);

    printf("\nPermissions:\n");
    printf("1 = View\n");
    printf("2 = Train\n");
    printf("4 = Test\n");
    printf("8 = Deploy\n");
    printf("Enter Permission Value: ");
    scanf("%d", &permission);


    // Calculate Model Score
    modelScore = (accuracy + confidence) / 2;

    printf("\n========== MODEL INFORMATION ==========\n");

    // Nested switch-case for User Role
    switch (userRole) {
        case 1:
            printf("User Role: Admin\n");

            // Nested switch for model status
            switch (modelStatus) {
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Invalid Model Status\n");
            }
            break;

        case 2:
            printf("User Role: Developer\n");

            switch (modelStatus) {
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Invalid Model Status\n");
            }
            break;

        case 3:
            printf("User Role: Researcher\n");

            switch (modelStatus) {
                case 1:
                    printf("Model Status: Ready\n");
                    break;
                case 2:
                    printf("Model Status: Testing\n");
                    break;
                case 3:
                    printf("Model Status: Training\n");
                    break;
                default:
                    printf("Invalid Model Status\n");
            }
            break;

        default:
            printf("Invalid User Role\n");
    }


    // Model Score
    printf("Model Score: %.2f\n", modelScore);


    // Check individual permissions using bitwise AND
    printf("\n========== PERMISSIONS ==========\n");

    printf("View Permission: %s\n",
           (permission & 1) ? "Allowed" : "Not Allowed");

    printf("Train Permission: %s\n",
           (permission & 2) ? "Allowed" : "Not Allowed");

    printf("Test Permission: %s\n",
           (permission & 4) ? "Allowed" : "Not Allowed");

    printf("Deploy Permission: %s\n",
           (permission & 8) ? "Allowed" : "Not Allowed");


    // Check Deployment Permission
    int deployPermission = permission & 8;


    // Nested if-else for deployment decision
    printf("\n========== DEPLOYMENT DECISION ==========\n");

    if (accuracy >= 80 && confidence >= 75) {

        if (datasetSize >= 1000 && modelStatus == 1) {

            if (deployPermission) {
                printf("Deployment Ready: YES\n");

                // Ternary operator
                printf("Decision: %s\n",
                       modelScore >= 80 ? "Deploy Model" : "Review Model");

            } else {
                printf("Deployment Ready: NO\n");
                printf("Reason: User does not have deployment permission.\n");
            }

        } else {
            printf("Deployment Ready: NO\n");
            printf("Reason: Dataset size or model status is not suitable.\n");
        }

    } else {
        printf("Deployment Ready: NO\n");
        printf("Reason: Accuracy or confidence is too low.\n");
    }


    // sizeof() operator
    printf("\n========== SYSTEM INFORMATION ==========\n");
    printf("Size of Accuracy variable: %zu bytes\n", sizeof(accuracy));
    printf("Size of Confidence variable: %zu bytes\n", sizeof(confidence));
    printf("Size of Dataset Size variable: %zu bytes\n", sizeof(datasetSize));


    // math.h function
    printf("Rounded Model Score: %.0f\n", round(modelScore));

    return 0;
}
