@interface WCPayTranferGetUserNameResponse : NSObject
{
    NSString * m_nsFacingPaidID; // +0x8
    NSString * m_nsUserNmae; // +0x10
    NSString * m_nsTruthName; // +0x18
    unsigned int m_uiTimeStamp; // +0x20
    unsigned int m_uiPayScene; // +0x24
    long long m_llTotalMoney; // +0x28
    NSString * m_nsProductDetail; // +0x30
    NSString * m_nsTransferXmlContent; // +0x38
    BOOL _payerDescRequired; // +0x40
    BOOL _enable_union_pay; // +0x41
    unsigned int _busi_type; // +0x44
    unsigned int _get_pay_wifi; // +0x48
    unsigned int _mch_time; // +0x4c
    unsigned int _amount_remind_bit; // +0x50
    unsigned int _show_photo; // +0x54
    unsigned int _scan_scene; // +0x58
    unsigned int _photo_style; // +0x5c
    unsigned int _get_favor_interval; // +0x60
    unsigned int _action_type; // +0x64
    NSString * _m_uifaceTofaceName; // +0x68
    NSString * _m_uifaceTofaceDescTitle; // +0x70
    NSString * _m_uifaceTofacePayerDescTitle; // +0x78
    NSString * _mch_name; // +0x80
    NSString * _mch_photo; // +0x88
    NSString * _rcvr_ticket; // +0x90
    NSString * _mch_type; // +0x98
    NSString * _receiver_openid; // +0xa0
    NSString * _payerDescPlaceholder; // +0xa8
    NSString * _scan_tile; // +0xb0
    NSString * _photo_url; // +0xb8
    NSString * _favor_desc; // +0xc0
    NSString * _favor_req_sign; // +0xc8
    NSString * _favor_req_extend; // +0xd0
    NSArray * _favor_list; // +0xd8
    BusiF2FFavorCommResp * _favor_comm_resp; // +0xe0
    NSString * _mch_info_string; // +0xe8
    NSString * _paying_rcvr_info; // +0xf0
    NSString * _succpage_rcvr_info; // +0xf8
    NSString * _jump_url; // +0x100
    WCPayWarningNotice * _notice; // +0x108
    ExtraBuyInfo * _extra_buy; // +0x110
    NSString * _favor_title; // +0x118
    NSString * _extra_buy_title; // +0x120
}
- (id)m_nsUserNmae;
- (void)setM_nsUserNmae:(id)arg1;
- (id)m_nsTruthName;
- (void)setM_nsTruthName:(id)arg1;
- (unsigned int)m_uiTimeStamp;
- (void)setM_uiTimeStamp:(unsigned int)arg1;
- (unsigned int)m_uiPayScene;
- (void)setM_uiPayScene:(unsigned int)arg1;
- (long long)m_llTotalMoney;
- (void)setM_llTotalMoney:(long long)arg1;
- (id)m_nsProductDetail;
- (void)setM_nsProductDetail:(id)arg1;
- (id)m_nsFacingPaidID;
- (void)setM_nsFacingPaidID:(id)arg1;
- (id)m_nsTransferXmlContent;
- (void)setM_nsTransferXmlContent:(id)arg1;
- (id)m_uifaceTofaceName;
- (void)setM_uifaceTofaceName:(id)arg1;
- (id)m_uifaceTofaceDescTitle;
- (void)setM_uifaceTofaceDescTitle:(id)arg1;
- (id)m_uifaceTofacePayerDescTitle;
- (void)setM_uifaceTofacePayerDescTitle:(id)arg1;
- (unsigned int)busi_type;
- (void)setBusi_type:(unsigned int)arg1;
- (id)mch_name;
- (void)setMch_name:(id)arg1;
- (id)mch_photo;
- (void)setMch_photo:(id)arg1;
- (id)rcvr_ticket;
- (void)setRcvr_ticket:(id)arg1;
- (unsigned int)get_pay_wifi;
- (void)setGet_pay_wifi:(unsigned int)arg1;
- (id)mch_type;
- (void)setMch_type:(id)arg1;
- (unsigned int)mch_time;
- (void)setMch_time:(unsigned int)arg1;
- (id)receiver_openid;
- (void)setReceiver_openid:(id)arg1;
- (unsigned int)amount_remind_bit;
- (void)setAmount_remind_bit:(unsigned int)arg1;
- (BOOL)payerDescRequired;
- (void)setPayerDescRequired:(BOOL)arg1;
- (id)payerDescPlaceholder;
- (void)setPayerDescPlaceholder:(id)arg1;
- (id)scan_tile;
- (void)setScan_tile:(id)arg1;
- (unsigned int)show_photo;
- (void)setShow_photo:(unsigned int)arg1;
- (id)photo_url;
- (void)setPhoto_url:(id)arg1;
- (id)favor_desc;
- (void)setFavor_desc:(id)arg1;
- (unsigned int)scan_scene;
- (void)setScan_scene:(unsigned int)arg1;
- (id)favor_req_sign;
- (void)setFavor_req_sign:(id)arg1;
- (id)favor_req_extend;
- (void)setFavor_req_extend:(id)arg1;
- (id)favor_list;
- (void)setFavor_list:(id)arg1;
- (id)favor_comm_resp;
- (void)setFavor_comm_resp:(id)arg1;
- (unsigned int)photo_style;
- (void)setPhoto_style:(unsigned int)arg1;
- (unsigned int)get_favor_interval;
- (void)setGet_favor_interval:(unsigned int)arg1;
- (id)mch_info_string;
- (void)setMch_info_string:(id)arg1;
- (id)paying_rcvr_info;
- (void)setPaying_rcvr_info:(id)arg1;
- (id)succpage_rcvr_info;
- (void)setSuccpage_rcvr_info:(id)arg1;
- (unsigned int)action_type;
- (void)setAction_type:(unsigned int)arg1;
- (id)jump_url;
- (void)setJump_url:(id)arg1;
- (id)notice;
- (void)setNotice:(id)arg1;
- (id)extra_buy;
- (void)setExtra_buy:(id)arg1;
- (id)favor_title;
- (void)setFavor_title:(id)arg1;
- (id)extra_buy_title;
- (void)setExtra_buy_title:(id)arg1;
- (BOOL)enable_union_pay;
- (void)setEnable_union_pay:(BOOL)arg1;
- (void).cxx_destruct;
@end

