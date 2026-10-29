@interface WCFinderFeedInteractionActionParams : NSObject
{
    unsigned long long _feedEnterActionType; // +0x8
    unsigned long long _refCommentId; // +0x10
}
- (unsigned long long)feedEnterActionType;
- (void)setFeedEnterActionType:(unsigned long long)arg1;
- (unsigned long long)refCommentId;
- (void)setRefCommentId:(unsigned long long)arg1;
@end
