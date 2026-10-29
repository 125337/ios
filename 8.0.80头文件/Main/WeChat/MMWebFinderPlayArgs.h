@interface MMWebFinderPlayArgs : NSObject
{
    NSString * _requestData; // +0x8
    WCFinderFeedMediaWrap * _mediaWrap; // +0x10
    WCPlayerPlayArgs * _playerInfo; // +0x18
}
- (id)requestData;
- (void)setRequestData:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)playerInfo;
- (void)setPlayerInfo:(id)arg1;
- (void).cxx_destruct;
@end
