//
//  StudentModel.h
//  StevenBaseModel
//
//  Created by qugo on 15/9/9.
//  Copyright (c) 2015年 qugo. All rights reserved.
//

#import "GenericModel.h"

@protocol StudentModel @end
@interface StudentModel : GenericModel

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *hobby;
@property (nonatomic, assign) NSInteger age;

@end
