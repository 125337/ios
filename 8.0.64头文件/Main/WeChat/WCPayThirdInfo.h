@interface WCPayThirdInfo : NSObject
{
    int _m_templateID; // +0x8
    int _m_sceneID; // +0xc
    NSString * _m_iconUrl; // +0x10
    NSString * _m_darkiconUrl; // +0x18
    NSString * _m_miniIconUrl; // +0x20
    NSString * _m_receiverTitle; // +0x28
    NSString * _m_receiverDes; // +0x30
    NSString * _m_senderTitle; // +0x38
    NSString * _m_senderDes; // +0x40
    NSString * _senderurl; // +0x48
    NSString * _receiverurl; // +0x50
    NSString * _sendernativeurl; // +0x58
    NSString * _receivernativeurl; // +0x60
    NSString * _titlecolor; // +0x68
    NSString * _senderscenetext; // +0x70
    NSString * _receiverscenetext; // +0x78
    NSString * _scenetextcolor; // +0x80
    NSString * _descolor; // +0x88
    NSString * _paymsgid; // +0x90
    NSString * _senderbackgroundurl; // +0x98
    NSString * _receiverbackgroundurl; // +0xa0
    NSString * _senderbackgroundname; // +0xa8
    NSString * _receiverbackgroundname; // +0xb0
    NSString * _titlecolordark; // +0xb8
    NSString * _descolordark; // +0xc0
    NSString * _scenetextcolordark; // +0xc8
    NSString * _seperatorcolor; // +0xd0
    NSString * _seperatorcolordark; // +0xd8
    NSString * _senderbackgroundurldark; // +0xe0
    NSString * _receiverbackgroundurldark; // +0xe8
    NSString * _thirdc2crouteinfo; // +0xf0
    ThirdC2CRouteInfo * _routeInfo; // +0xf8
    NSString * _realtitlecolordark; // +0x100
    NSString * _realdescolordark; // +0x108
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)getTextFrom:(XmlReaderNode_t *)arg1 atNodeName:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)fromNode:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)routeInfo;
- (int)m_templateID;
- (void)setM_templateID:(int)arg1;
- (id)m_iconUrl;
- (void)setM_iconUrl:(id)arg1;
- (id)m_darkiconUrl;
- (void)setM_darkiconUrl:(id)arg1;
- (id)m_miniIconUrl;
- (void)setM_miniIconUrl:(id)arg1;
- (id)m_receiverTitle;
- (void)setM_receiverTitle:(id)arg1;
- (id)m_receiverDes;
- (void)setM_receiverDes:(id)arg1;
- (id)m_senderTitle;
- (void)setM_senderTitle:(id)arg1;
- (id)m_senderDes;
- (void)setM_senderDes:(id)arg1;
- (int)m_sceneID;
- (void)setM_sceneID:(int)arg1;
- (id)senderurl;
- (void)setSenderurl:(id)arg1;
- (id)receiverurl;
- (void)setReceiverurl:(id)arg1;
- (id)sendernativeurl;
- (void)setSendernativeurl:(id)arg1;
- (id)receivernativeurl;
- (void)setReceivernativeurl:(id)arg1;
- (id)titlecolor;
- (void)setTitlecolor:(id)arg1;
- (id)senderscenetext;
- (void)setSenderscenetext:(id)arg1;
- (id)receiverscenetext;
- (void)setReceiverscenetext:(id)arg1;
- (id)scenetextcolor;
- (void)setScenetextcolor:(id)arg1;
- (id)descolor;
- (void)setDescolor:(id)arg1;
- (id)paymsgid;
- (void)setPaymsgid:(id)arg1;
- (id)senderbackgroundurl;
- (void)setSenderbackgroundurl:(id)arg1;
- (id)receiverbackgroundurl;
- (void)setReceiverbackgroundurl:(id)arg1;
- (id)senderbackgroundname;
- (void)setSenderbackgroundname:(id)arg1;
- (id)receiverbackgroundname;
- (void)setReceiverbackgroundname:(id)arg1;
- (id)titlecolordark;
- (void)setTitlecolordark:(id)arg1;
- (id)descolordark;
- (void)setDescolordark:(id)arg1;
- (id)scenetextcolordark;
- (void)setScenetextcolordark:(id)arg1;
- (id)seperatorcolor;
- (void)setSeperatorcolor:(id)arg1;
- (id)seperatorcolordark;
- (void)setSeperatorcolordark:(id)arg1;
- (id)senderbackgroundurldark;
- (void)setSenderbackgroundurldark:(id)arg1;
- (id)receiverbackgroundurldark;
- (void)setReceiverbackgroundurldark:(id)arg1;
- (id)thirdc2crouteinfo;
- (void)setThirdc2crouteinfo:(id)arg1;
- (void)setRouteInfo:(id)arg1;
- (id)realtitlecolordark;
- (void)setRealtitlecolordark:(id)arg1;
- (id)realdescolordark;
- (void)setRealdescolordark:(id)arg1;
- (void).cxx_destruct;
@end
