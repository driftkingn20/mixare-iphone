/* Copyright (C) 2010- Peer internet solutions
 *
 * This file is part of mixare.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/> */
//
//  Position.h
//  Mixare
//
//  Created by Aswin Ly on 24-09-12.
//  Copyright (c) 2012 Peer GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MapViewAnnotation.h"
#import "PhysicalPlace.h"

@interface Position : NSObject {
    NSString *title;
    NSString *summary;
    NSString *url;
    float latitude;
    float longitude;
    CGFloat altitude;
    NSString *source;
    MapViewAnnotation *mapViewAnnotation;
    PhysicalPlace *poiItem;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) MapViewAnnotation* mapViewAnnotation;
@property (nonatomic, readonly) PhysicalPlace* poiItem;
@property (nonatomic, readonly) NSString *source;

- (Position*)initWithTitle:(NSString*)tit withSummary:(NSString*)sum withUrl:(NSString*)u withLatitude:(float)lat withLongitude:(float)lon withAltitude:(CGFloat)alt withSource:(NSString*)sour;

@end
