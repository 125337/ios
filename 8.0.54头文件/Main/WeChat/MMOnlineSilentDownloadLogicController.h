@interface MMOnlineSilentDownloadLogicController : NSObject <IMsgExt, IDownloadImageExt, CNetworkStatusExt, PBMessageObserverDelegate>
{
    NSMutableArray * _silentDownloadFileList; // +0x8
    NSMutableArray * _sentDownloadFileList; // +0x10
    SilentDownloadMessageWrap * _currentDownloadImage; // +0x18
    SilentDownloadMessageWrap * _currentDownloadVideo; // +0x20
    SilentDownloadMessageWrap * _currentDownloadFile; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)reloadDataFromFile;
- (void)saveDataToFile;
- (void)preStartSilentDownloadFile:(id)arg1 svrid:(long long)arg2;
- (void)sendSilentDownloadFileToBackDevice:(id)arg1;
- (BOOL)isWrapMsgInSilentDownloading:(id)arg1;
- (BOOL)shouldShowSetting;
- (BOOL)allowSilentDownload;
- (void)setAllowSilentDownload:(BOOL)arg1;
- (BOOL)isExistedInDownloadList:(id)arg1;
- (BOOL)canMediaDownloadedNow:(unsigned int)arg1;
- (BOOL)isMessageValidForSilentDownload:(id)arg1;
- (BOOL)isTwoMessageEqual:(id)arg1 silent:(id)arg2;
- (void)removeMessageWithUsername:(id)arg1;
- (void)checkList;
- (BOOL)isUserNeedProcess:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgNotAddDBNotify:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isHDImageDownloaded:(id)arg1;
- (void)OnDownloadImageOk:(id)arg1;
- (void)OnDownloadImageExpired:(id)arg1;
- (void)OnDownloadImageStop:(id)arg1;
- (void)OnDownloadImageFail:(id)arg1;
- (void)OnDownloadImageStopByChatName:(id)arg1 FromDelMsg:(BOOL)arg2;
- (void)OnMsgDownloadVideoSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadVideoCancel:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isFileDownloaded:(id)arg1;
- (void)OnMsgDownloadAppAttachSuccess:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCommonFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadAppAttachCancel:(id)arg1 MsgWrap:(id)arg2;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)silentDownloadFileList;
- (void)setSilentDownloadFileList:(id)arg1;
- (id)sentDownloadFileList;
- (void)setSentDownloadFileList:(id)arg1;
- (id)currentDownloadImage;
- (void)setCurrentDownloadImage:(id)arg1;
- (id)currentDownloadVideo;
- (void)setCurrentDownloadVideo:(id)arg1;
- (id)currentDownloadFile;
- (void)setCurrentDownloadFile:(id)arg1;
- (void).cxx_destruct;
@end

