//
//  MBXClusterItem.h
//  TestApp
//
//  Created by Jordan Kiley on 11/10/17.
//  Copyright © 2017 Mapbox. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

@protocol MBXClusterItem <NSObject>

/**
 Provides the location for the cluster item.
 */
@property(nonatomic, readonly) CLLocationCoordinate2D *clusterPosition;

@end
