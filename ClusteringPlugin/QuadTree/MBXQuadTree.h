//
//  MBXQuadTree.h
//  TestApp
//
//  Created by Jordan Kiley on 11/9/17.
//  Copyright © 2017 Mapbox. All rights reserved.
//

#import <Foundation/Foundation.h>
@import Mapbox;
@interface MBXQuadTree : NSObject

/**
 
 Initialize a MBXQuadTree with the array of annotations.
 **/

- (instancetype)initWithAnnotations:(NSArray<id<MGLAnnotation>> *)annotations NS_DESIGNATED_INITIALIZER;

@end
