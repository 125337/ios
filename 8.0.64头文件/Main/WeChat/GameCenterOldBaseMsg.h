@interface GameCenterOldBaseMsg : GameCenterBaseMsg
{
    NSString * _noticeId; // +0x8
    GameCenterMsgAppInfo * _appInfo; // +0x10
    GameCenterMsgBubbleInfoOld * _bubbleInfoOld; // +0x18
    GameCenterMsgControlInfo * _controlInfo; // +0x20
    NSString * _formatContent; // +0x28
    NSString * _url; // +0x30
    GameCenterMsgActionInfo * _actionInfo; // +0x38
}
+ (id)parseFromMsgWrap:(id)arg1;
+ (id)parseFromDbItem:(id)arg1;
- (id)initWithXmlNode:(XmlReaderNode_t *)arg1;
- (id)parseEntranceInfoOld:(XmlReaderNode_t *)arg1;
- (id)parseFloatLayerInfoOld:(XmlReaderNode_t *)arg1;
- (id)parseBubbleInfoOld:(XmlReaderNode_t *)arg1;
- (id)getNotifyContent;
- (id)transBubbleInfo:(id)arg1;
- (id)getMsgCenterContent;
- (id)getSourceInfo;
- (id)getMsgCardInfo;
- (BOOL)isExpired;
- (BOOL)notInMsgCenter;
- (id)appid;
- (id)getNoticeid;
- (unsigned int)createTime;
- (int)getMsgReportType;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)appInfo;
- (void)setAppInfo:(id)arg1;
- (id)bubbleInfoOld;
- (void)setBubbleInfoOld:(id)arg1;
- (id)controlInfo;
- (void)setControlInfo:(id)arg1;
- (id)formatContent;
- (void)setFormatContent:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)actionInfo;
- (void)setActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
