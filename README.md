使用方法

        NSString *imageMd5 = [PlMD5 getmd5WithImage:[UIImage new]];
        NSString *dataMd5 = [PlMD5 getMD5WithData:[NSData data]];
        NSString *fileMd5 = [PlMD5 getFileMD5WithPath:@""];
        NSString *stringMd5 = [PlMD5 getmd5WithString:@""];
