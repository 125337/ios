@interface GameCenterCommMsg : GameCenterBaseMsg
{
    NSString * _appId; // +0x8
    GameCenterMsgBubbleInfo * _bubbleInfo; // +0x10
    GameCenterMsgTimeInfo * _timeInfo; // +0x18
    GameCenterMsgMessageCenterInfo * _msgCenterInfo; // +0x20
    GameCenterMsgReportInfo * _reportInfo; // +0x28
    GameCenterMsgV2Node * _msgV2Node; // +0x30
    GameCenterTabInfoNode * _tabInfoNode; // +0x38
    ReddotVerifyInfo * _verifyInfo; // +0x40
}
- (id)initWithXmlNode:(XmlReaderNode_t *)arg1;
- (id)parseVerifyInfo:(XmlReaderNode_t *)arg1;
- (id)parseWePkgPreloadInfo:(XmlReaderNode_t *)arg1;
- (id)parseGameMsgV2Node:(XmlReaderNode_t *)arg1;
- (id)parseTimeInfo:(XmlReaderNode_t *)arg1;
- (id)parseEntranceInfo:(XmlReaderNode_t *)arg1;
- (id)parseFloatLayerInfo:(XmlReaderNode_t *)arg1;
- (id)parseBannerInfo:(XmlReaderNode_t *)arg1;
- (id)parseNestWepkgs:(XmlReaderNode_t *)arg1;
- (id)parseBubbleInfo:(XmlReaderNode_t *)arg1;
- (id)parseReportInfo:(XmlReaderNode_t *)arg1;
- (id)parseMsgCenterInfo:(XmlReaderNode_t *)arg1;
- (id)parseMsgSender:(XmlReaderNode_t *)arg1;
- (id)parseContentPic:(XmlReaderNode_t *)arg1;
- (id)parseMsgCardInfo:(XmlReaderNode_t *)arg1;
- (id)parseUserInfoList:(XmlReaderNode_t *)arg1;
- (id)parseMsgSecondLineInfo:(XmlReaderNode_t *)arg1;
- (id)parseMsgSourceInfo:(XmlReaderNode_t *)arg1;
- (id)parseTabInfoNode:(XmlReaderNode_t *)arg1;
- (id)parseGameLifeInfo:(XmlReaderNode_t *)arg1;
- (id)parseGameLifeInfoChatRoom:(XmlReaderNode_t *)arg1;
- (id)parseGameMsgExtraData:(XmlReaderNode_t *)arg1;
- (void)parseMessageExposureStrategy:(XmlReaderNode_t *)arg1;
- (id)getNotifyContent;
- (void)updateMsgCenterV2Content;
- (BOOL)isExpired;
- (double)timeBeforeExpire;
- (BOOL)notInMsgCenter;
- (unsigned int)createTime;
- (id)appid;
- (id)getNoticeid;
- (int)getMsgReportType;
- (id)getReportExtData;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)bubbleInfo;
- (void)setBubbleInfo:(id)arg1;
- (id)timeInfo;
- (void)setTimeInfo:(id)arg1;
- (id)msgCenterInfo;
- (void)setMsgCenterInfo:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)msgV2Node;
- (void)setMsgV2Node:(id)arg1;
- (id)tabInfoNode;
- (void)setTabInfoNode:(id)arg1;
- (id)verifyInfo;
- (void)setVerifyInfo:(id)arg1;
- (void).cxx_destruct;
@end
