@interface WCFinderActivateLiveMicCGI : WCFinderBaseCgi
{
    WCFinderDataItem * _dataItem; // +0x8
    NSString * _liveMicId; // +0x10
    NSData * _liveCookies; // +0x18
    long long _micType; // +0x20
    unsigned long long _reportScene; // +0x28
    NSMutableArray * _micInfoList; // +0x30
    NSMutableArray * _micAudienceList; // +0x38
    NSMutableArray * _otherRoomMicInfoList; // +0x40
    NSMutableArray * _unknownMicInfoList; // +0x48
    FinderActivateLiveMicRequest_MicInfo * _selfAnchorMicInfo; // +0x50
    long long _scene; // +0x58
    id /* block */ _successBlock; // +0x60
    id /* block */ _failBlock; // +0x68
}
- (id)initForAudienceWithDataItem:(id)arg1 micType:(long long)arg2 liveMicId:(id)arg3 liveCookies:(id)arg4 successBlock:(id /* block */)arg5 failBlock:(id /* block */)arg6;
- (id)initForAnchorWithDataItem:(id)arg1 micType:(long long)arg2 reportScene:(unsigned long long)arg3 micInfoList:(id)arg4 micAudienceList:(id)arg5 otherRoomMicInfoList:(id)arg6 unknownMicInfoList:(id)arg7 selfAnchorMicInfo:(id)arg8 liveCookies:(id)arg9 successBlock:(id /* block */)arg10 failBlock:(id /* block */)arg11;
- (void)createRequest;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)liveMicId;
- (void)setLiveMicId:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (long long)micType;
- (void)setMicType:(long long)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (id)micInfoList;
- (void)setMicInfoList:(id)arg1;
- (id)micAudienceList;
- (void)setMicAudienceList:(id)arg1;
- (id)otherRoomMicInfoList;
- (void)setOtherRoomMicInfoList:(id)arg1;
- (id)unknownMicInfoList;
- (void)setUnknownMicInfoList:(id)arg1;
- (id)selfAnchorMicInfo;
- (void)setSelfAnchorMicInfo:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failBlock;
- (void)setFailBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

