@interface NetworkInfo : NSObject
{
    NSString * _type; // +0x8
    NSNumber * _isFreeSimCard; // +0x10
    NSNumber * _allowedMobileNet; // +0x18
}
+ (id)makeWithType:(id)arg1 isFreeSimCard:(id)arg2 allowedMobileNet:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)type;
- (void)setType:(id)arg1;
- (id)isFreeSimCard;
- (void)setIsFreeSimCard:(id)arg1;
- (id)allowedMobileNet;
- (void)setAllowedMobileNet:(id)arg1;
- (void).cxx_destruct;
@end
