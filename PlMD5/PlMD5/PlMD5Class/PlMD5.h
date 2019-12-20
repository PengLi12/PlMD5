//
//  PlMD5.h
//  PlMD5
//
//  Created by mac on 2019/12/20.
//  Copyright © 2019 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define FileHashData 1024*8

@interface PlMD5 : NSObject

/**
 *  计算NSData的MD5值
 */
+ (NSString *)getMD5WithData:(NSData *)data;

/**
 *  计算NSString的MD5值
 */
+ (NSString *)getMD5WtihString:(NSString *)string;

/**
 *  计算UIImage的MD5值
 */
+ (NSString *)getMD5WithImage:(UIImage *)image;

/**
 *  计算File的MD5值
 */
+ (NSString *)getMD5WithFile:(NSString *)file;

@end

NS_ASSUME_NONNULL_END
