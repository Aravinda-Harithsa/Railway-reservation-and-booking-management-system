# TEST PLAN:

##  High level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if the user is able to login to system with credentials | SUCCESS| SUCCESS|Requirement based ||
|  H_02       |check if employee can do all operations|User's choice  |  SUCCESS|SUCCESS|Requirement based |

## Low level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |When choosing from the options, check if the input is valid or invalid|  User's Choice|Invalid Message/ Invoke the process|SUCCESS| Sanity           |
|  L_02       |Check that the database is updated |user choice| SUCCESS|SUCCESS|Regression    |
|  L_03       |Check user's choice when selects dispaly list of the Employee| SUCCESS|SUCCESS|SUCCESS|Sanity    |
|  L_04       |If the train is not found | user gives invalid number |Already Exists|Already Exists|Regression    |
