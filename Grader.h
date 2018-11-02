#ifndef GRADER_H_INCLUDED
#define GRADER_H_INCLUDED

#define MAX_GRADES 5

// Prototype go here:
void assignshowgrade( float grades[MAX_GRADES] );
char getlettergrade(float grade); //pass float data from above grades --> grade



// Function blueprints go here:
void assignshowgrade( float grades[MAX_GRADES] )
{
    // iterate through  scores
    //associate through letter grades
    //for the range below

    //i pushes data through array
    int i = 0;

    for(i = 0; i < MAX_GRADES; i++)
    {
            char c = getlettergrade( grades[i] );
            //99.7 = A
            printf("%.2f = %c\n", grades[i], c);
    }
}
char getlettergrade(float grade)
{
   char g;

    if(grade >= 90.F)//F= literal data and matches and specifies absolute data
   {
       g = 'A';
   }
    else if(grade >= 80.F && grade <= 89.9F)
    {
        g = 'B';
    }
    else if(grade >= 70.F && grade <= 79.9F)
        {
            g = 'C';
        }
    else if(grade >= 60.F && grade <= 69.9F)
            {
                g = 'D';
            }
    else
            {
                g = 'F';
            }





   return g;

}




#endif // GRADER_H_INCLUDED
