//
//  GradeModel.m
//  StevenBaseModel
//
//  Created by qugo on 15/9/9.
//  Copyright (c) 2015年 qugo. All rights reserved.
//

#import "GradeModel.h"

@implementation GradeModel
- (instancetype)init
{
    self = [super init];
    if (self) {
        _students = (NSMutableArray<StudentModel> *)[[NSMutableArray alloc] init];
    }
    return self;
}

@end
