@interface WCMomentsPostReportEditActionDetail : NSObject <NSCopying>
{
    long long _action; // +0x8
    BOOL _isPage; // +0x10
    BOOL _isFinished; // +0x11
    double _actionStartTime; // +0x18
    double _actionEndTime; // +0x20
}
+ (BOOL)isPageAction:(long long)arg1;
- (id)initWithAction:(long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)onActionFinished;
- (unsigned long long)actionDuration;
- (long long)action;
- (BOOL)isPage;
@end

