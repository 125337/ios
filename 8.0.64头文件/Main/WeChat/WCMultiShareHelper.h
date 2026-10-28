@interface WCMultiShareHelper : NSObject
{
    NSMutableArray * _arrNotDownloadMsgWrap; // +0x8
    NSArray * _arrMsgWrap; // +0x10
    NSString * _nsCurrTime; // +0x18
}
+ (id)generateShareItemWithObjects:(id)arg1;
- (id)initWithMsgList:(id)arg1;
- (id)getTextShareContent:(id)arg1 content:(id)arg2;
- (id)getImageShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getVideoShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getFileShareContent:(id)arg1 isFileExist:(BOOL)arg2;
- (id)getVoiceShareContent:(id)arg1;
- (id)getURLShareContent:(id)arg1;
- (id)getOtherShareContent:(id)arg1;
- (id)generatePasteShareItems;
- (id)generateSystemShareItems;
- (id)arrNotDownloadMsgWrap;
- (void)setArrNotDownloadMsgWrap:(id)arg1;
- (id)arrMsgWrap;
- (void)setArrMsgWrap:(id)arg1;
- (id)nsCurrTime;
- (void)setNsCurrTime:(id)arg1;
- (void).cxx_destruct;
@end
