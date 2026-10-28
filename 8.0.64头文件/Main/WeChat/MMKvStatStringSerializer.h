@interface MMKvStatStringSerializer : MMObject
+ (id)statStringForStatItem:(id)arg1 withContainerSeperator:(id)arg2;
+ (id)statStringForArray:(id)arg1 WithSeperator:(id)arg2;
+ (id)statStringForSet:(id)arg1 WithSeperator:(id)arg2;
+ (BOOL)isContainerItemTypeStatable:(id)arg1;
@end
