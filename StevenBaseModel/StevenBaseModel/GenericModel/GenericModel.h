//
//  GenericModel.h
//  StevenBaseModel
//
//  Created by qugo on 15/9/9.
//  Copyright (c) 2015年 qugo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GenericModel : NSObject

/**
 * NSDictionary -> Model
 */
+ (id)getObjectByDictionary:(NSDictionary *)dic clazz:(Class)clazz;

/**
 * JSON -> Model
 */
+ (id)getObjectByJSON:(NSString *)json clazz:(Class)clazz;

/**
 * Model -> NSDictionary
 */
+ (NSDictionary *)getDictionaryByObject:(id)object;

/**
 * Model -> JSON
 */
+ (NSString *)getJSONByObject:(id)object;

@end
