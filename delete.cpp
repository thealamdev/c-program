    cout << "Enter deleted element:";

    cin >> target;

    for(i =0;i<n;i++){
        if(arr[i] == target){
              deleteIndex = i;
              break;
        }
    }

     if (deleteIndex >= 0 && arr[i] == target)
    {
        for (i=0; i<n; i++)
        {
            if (i >= deleteIndex)
            {
                arr[i] = arr[i + 1];
            }
        }
        n--;
    }
    else{
        "/n Item not found";
    }