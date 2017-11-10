//
//  MBXCluster.h
//  MapboxPlugins
//
//  Created by Jordan Kiley on 11/10/17.
//  Copyright © 2017 Mapbox. All rights reserved.
//

#import "MBXClusterItem.h"

@protocol MBXCluster <NSObject>

@property(nonatomic, readonly) CLLocationCoordinate2D clusterPosition;

@property(nonatomic, readonly) NSUInteger itemCount;

@property(nonatomic, readonly) NSArray<id<MBXClusterItem>> *items;

@end
