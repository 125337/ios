@interface WCNetworkMediaInfo : MMObject <PBMessageObserverDelegate>
{
    WCNetworkMediaInfo * weakSelf; // +0x8
    int _source; // +0x10
    NSString * _vid; // +0x18
    id <WCNetworkMediaInfoDelegate> _delegate; // +0x20
}
- (id)init;
- (void)setH5URL:(id)arg1;
- (void)startGetVideoInfo;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getInfoFromTXVideo:(id)arg1;
- (void)onError:(int)arg1;
- (id)vid;
- (void)setVid:(id)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

