@interface TPDownloadParam : NSObject
{
    int _dlType; // +0x8
    NSArray * _urlList; // +0x10
    NSDictionary * _extraInfo; // +0x18
}
- (id)initWithUrlList:(id)arg1 dlType:(int)arg2 extraInfo:(id)arg3;
- (id)getCdnUrls;
- (int)getClipNo;
- (int)getClipCount;
- (id)getKeyId;
- (id)getSavePath;
- (id)getVid;
- (id)getPlayDefinition;
- (BOOL)isCharge;
- (BOOL)isOffline;
- (id)getExtraJsonInfo;
- (BOOL)isAdaptivePlay;
- (int)dlType;
- (void)setDlType:(int)arg1;
- (id)urlList;
- (void)setUrlList:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end
