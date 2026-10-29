@interface WCFinderColumnFlowRequestParams : NSObject
{
    int _pullType; // +0x8
    int _displayTabType; // +0xc
    int _commentScene; // +0x10
    NSData * _lastBuffer; // +0x18
    NSString * _feedId; // +0x20
    double _latitude; // +0x28
    double _longitude; // +0x30
    FinderClientStatus * _clientStatus; // +0x38
    unsigned long long _columnId; // +0x40
    NSString * _columnBuffer; // +0x48
    NSData * _rootLastBuffer; // +0x50
}
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (double)latitude;
- (void)setLatitude:(double)arg1;
- (double)longitude;
- (void)setLongitude:(double)arg1;
- (int)pullType;
- (void)setPullType:(int)arg1;
- (int)displayTabType;
- (void)setDisplayTabType:(int)arg1;
- (id)clientStatus;
- (void)setClientStatus:(id)arg1;
- (unsigned long long)columnId;
- (void)setColumnId:(unsigned long long)arg1;
- (id)columnBuffer;
- (void)setColumnBuffer:(id)arg1;
- (id)rootLastBuffer;
- (void)setRootLastBuffer:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
