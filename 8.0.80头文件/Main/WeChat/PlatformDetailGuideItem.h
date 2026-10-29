@interface PlatformDetailGuideItem : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _tips; // +0x10
    NSString * _actionTitle; // +0x18
}
+ (id)makeWithType:(unsigned long long)arg1 tips:(id)arg2 actionTitle:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)actionTitle;
- (void)setActionTitle:(id)arg1;
- (void).cxx_destruct;
@end
