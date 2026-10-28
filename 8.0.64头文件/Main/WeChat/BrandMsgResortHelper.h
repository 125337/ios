@interface BrandMsgResortHelper : NSObject
+ (BOOL)isOutsideResortScene:(unsigned long long)arg1;
+ (BOOL)isInsideResortScene:(unsigned long long)arg1;
+ (unsigned int)debugSwitchForceResortForScene:(unsigned long long)arg1;
+ (id)genBizMsgItemFromMsgWrap:(id)arg1 maxGroupId:(unsigned int)arg2;
@end
