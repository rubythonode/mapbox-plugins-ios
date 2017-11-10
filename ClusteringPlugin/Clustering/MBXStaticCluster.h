//
//  MBXStaticCluster.h
//  TestApp
//
//  Created by Jordan Kiley on 11/10/17.
//  Copyright © 2017 Mapbox. All rights reserved.
//

#import "MBXCluster.h"

NS_ASSUME_NONNULL_BEGIN

@interface MBXStaticCluster : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithClusterPosition:(CLLocationCoordinate2D)clusterPosition NS_DESIGNATED_INITIALIZER;

@property(nonatomic, readonly) CLLocationCoordinate2D clusterPosition;

@property(nonatomic, readonly) NSUInteger itemCount;

@property(nonatomic, readonly) NSArray<id<MBXClusterItem>> *clusterItems;

- (void)addItem:(id<MBXClusterItem>)clusterItem;

- (void)removeItem:(id<MBXClusterItem>)clusterItem;

@end

NS_ASSUME_NONNULL_END
