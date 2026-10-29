@interface TAVTimeUtil : NSObject
+ (id)sliceTimeRangesForTimeRange1:(struct)arg1 timeRange2:(struct)arg2;
+ (id)mixTimeRangesWithMinTimeRange:(struct)arg1 intersectionTimeRange:(struct)arg2 maxTimeRange:(struct)arg3;
+ (id)timeRange:(struct)arg1 substructOther:(struct)arg2;
@end
