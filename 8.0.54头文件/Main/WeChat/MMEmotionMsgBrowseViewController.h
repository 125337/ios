@interface MMEmotionMsgBrowseViewController : MMEmotionMsgBaseBrowseViewController <IEmoticonDownloadExt, IMsgRevokeExt>
{
    CMessageWrap * _wrapMsg; // +0x68
}
- (id)initWithMsgWrap:(id)arg1;
- (void)setMsgWrap:(id)arg1;
- (void)viewDidLoad;
- (void)initImageViewWithFrame:(CGRect)arg1;
- (void)addSmallLoadingView;
- (void)removeSmallLoadingView;
- (id)getDesc;
- (id)getReportFromUsr;
- (id)getChatName;
- (id)emoticonWrapForAdd;
- (id)msgWrapForOperation;
- (BOOL)isInChatroom;
- (void)OnEmoticonDownload:(unsigned int)arg1 withMsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)wrapMsg;
- (void)setWrapMsg:(id)arg1;
- (void).cxx_destruct;
@end

