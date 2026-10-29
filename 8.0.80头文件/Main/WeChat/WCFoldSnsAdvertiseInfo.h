@interface WCFoldSnsAdvertiseInfo : NSObject
{
    BOOL _isPreviewAd; // +0x8
    NSString * _rl; // +0x10
    NSString * _apurl; // +0x18
    NSString * _traceid; // +0x20
    NSString * _groupId; // +0x28
    NSString * _aid; // +0x30
    NSData * _crtSize; // +0x38
    NSString * _uxinfo; // +0x40
    NSString * _adPosid; // +0x48
    NSString * _tid; // +0x50
    NSString * _reportExtraData; // +0x58
    FoldSnsInfo * _foldSnsInfo; // +0x60
    NSString * _snsAdId; // +0x68
    WCFoldSnsAdFeedbackInfo * _feedbackInfo; // +0x70
    double _videoProcess; // +0x78
    WCFoldSnsAdBodyWrap * _adBodyWrap; // +0x80
}
+ (id)fromServerObject:(id)arg1;
- (id)itemID;
- (BOOL)isSingleVideoStyle;
- (BOOL)isSingleImageStyle;
- (BOOL)isMultiImageStyle;
- (int)foldStyleType;
- (id)rl;
- (void)setRl:(id)arg1;
- (id)apurl;
- (void)setApurl:(id)arg1;
- (id)traceid;
- (void)setTraceid:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)crtSize;
- (void)setCrtSize:(id)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)adPosid;
- (void)setAdPosid:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (BOOL)isPreviewAd;
- (void)setIsPreviewAd:(BOOL)arg1;
- (id)reportExtraData;
- (void)setReportExtraData:(id)arg1;
- (id)foldSnsInfo;
- (void)setFoldSnsInfo:(id)arg1;
- (id)snsAdId;
- (void)setSnsAdId:(id)arg1;
- (id)feedbackInfo;
- (void)setFeedbackInfo:(id)arg1;
- (double)videoProcess;
- (void)setVideoProcess:(double)arg1;
- (id)adBodyWrap;
- (void)setAdBodyWrap:(id)arg1;
- (void).cxx_destruct;
@end
