//
//  ControlLayer.h
//  hello_world
//
//  Created by iclick on 12-1-5.
//  Copyright 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface ControlLayer : CCLayerColor {
    id receiver;
}

+ (id) nodeReceiver: (id) rec;

@end
