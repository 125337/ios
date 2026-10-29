@interface WCFinderMyTabEntranceParams : NSObject <NSCopying>
{
    int _wordingType; // +0x8
    NSString * _entranceWording; // +0x10
    NSString * _entranceWordingUrl; // +0x18
    WCFinderRedDotTipsShowInfo * _showInfo; // +0x20
}
- (id)description;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)entranceWording;
- (void)setEntranceWording:(id)arg1;
- (id)entranceWordingUrl;
- (void)setEntranceWordingUrl:(id)arg1;
- (int)wordingType;
- (void)setWordingType:(int)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (void).cxx_destruct;
@end
