//
//  GradeModel.h
//  StevenBaseModel
//
//  Created by qugo on 15/9/9.
//  Copyright (c) 2015年 qugo. All rights reserved.
//

#import "GenericModel.h"
#import "StudentModel.h"


@interface GradeModel : GenericModel
@property (nonatomic, strong) NSMutableArray<StudentModel> *students;

@end
