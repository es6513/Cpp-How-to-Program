    for (int j = i-1; j >= 0;j--){
      if(data[j]>insert){
        data[j + 1] = data[j];
        data[j] = insert;
      }
    }
