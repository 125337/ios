@interface KindaAddPayCardService : NSObject <MMKAddPayCardService>
- (BOOL)isBanBindCard;
- (id)getBanBindCardTitle;
- (id)enterBindCardProcess:(int)arg1;
- (BOOL)clearBindCardProcess;
@end
