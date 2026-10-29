@interface MJActionPanelMainMenuItem : NSObject
{
    BOOL _enabled; // +0x8
    BOOL _activated; // +0x9
    unsigned long long _type; // +0x10
    NSString * _disabledTipText; // +0x18
}
+ (id)titleWithItem:(id)arg1;
+ (id)imageNameWithItem:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 activated:(BOOL)arg2;
- (id)initWithType:(unsigned long long)arg1 enabled:(BOOL)arg2 disabledTipText:(id)arg3;
- (BOOL)isIconColorful;
- (id)iconName;
- (double)iconAlpha;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)type;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)activated;
- (void)setActivated:(BOOL)arg1;
- (id)disabledTipText;
- (void)setDisabledTipText:(id)arg1;
- (void).cxx_destruct;
@end
