//
//  LineChartModel.h
//  chartee
//
//  Created by zzy on 5/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ChartModel.h"
#import "YAxis.h"
#import "Chart.h"

@interface LineChartModel: ChartModel
@property(nonatomic,assign,getter = isShowHorLine)BOOL showHorLine;//default NO
@end
