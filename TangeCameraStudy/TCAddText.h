//
//  TCAddText.h
//  TangeCameraStudy
//
//  Created by Eri Tange on 2014/06/09.
//  Copyright (c) 2014年 Eri Tange. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TCImage.h"

@protocol TCAddText <NSObject>
- (UIImage *)drawingText:(TCImage *)image;
@end
