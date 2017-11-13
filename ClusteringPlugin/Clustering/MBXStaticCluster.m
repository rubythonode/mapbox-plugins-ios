//
//  MBXStaticCluster.m
//  TestApp
//
//  Created by Jordan Kiley on 11/10/17.
//  Copyright © 2017 Mapbox. All rights reserved.
//

#import "MBXStaticCluster.h"

@implementation MBXStaticCluster {
    NSMutableArray<id<MBXClusterItem>> *_clusterItems;
}

- (instancetype)initWithClusterPosition:(CLLocationCoordinate2D)clusterPosition {
    if (self = [super init]) {
        _clusterItems = [[NSMutableArray alloc] init];
        _clusterPosition = clusterPosition;
    }
    return self;
}

- (NSUInteger)itemCount {
    return _clusterItems.count;
}

- (NSArray<id<MBXClusterItem>> *)clusterItems {
    return [_clusterItems copy];
}

// JK: Can I just call `addObject` instead?
- (void)addItem:(id<MBXClusterItem>)clusterItem {
    [_clusterItems addObject:clusterItem];
}

- (void)removeItem:(id<MBXClusterItem>)clusterItem {
    [_clusterItems removeObject:clusterItem];
}
@end
