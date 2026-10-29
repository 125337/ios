@interface MMKPayMenuRedDotItem : NSObject
{
    NSString * _itemName; // +0x8
    long long _expireTime; // +0x10
    NSString * _wording; // +0x18
}
+ (id)KPayMenuRedDotItemWithItemName:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;
- (id)initWithItemName:(id)arg1 expireTime:(long long)arg2 wording:(id)arg3;
- (id)description;
- (id)itemName;
- (long long)expireTime;
- (id)wording;
- (void).cxx_destruct;
@end

