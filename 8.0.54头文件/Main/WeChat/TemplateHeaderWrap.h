@interface TemplateHeaderWrap : NSObject
{
    BOOL _hideTitleAndTime; // +0x8
    BOOL _showIconAndDisplayName; // +0x9
    BOOL _hideIconAndDisplayNameLine; // +0xa
    BOOL _showComplaintButton; // +0xb
    BOOL _objIsShowShortcutIcon; // +0xc
    BOOL _hideTitle; // +0xd
    BOOL _hideTime; // +0xe
    BOOL _isIgnoreHideTitleAndTimeFlag; // +0xf
    BOOL _show_right_icon_and_desc_name; // +0x10
    BOOL _show_finder_feed_entry; // +0x11
    BOOL _show_header_background_img; // +0x12
    unsigned int _businessType; // +0x14
    unsigned int _weappVersion; // +0x18
    unsigned int _weappState; // +0x1c
    unsigned int _paymsgStyle; // +0x20
    NSString * _title; // +0x28
    UIColor * _titleColor; // +0x30
    NSDate * _pubTime; // +0x38
    NSString * _first; // +0x40
    UIColor * _firstColor; // +0x48
    NSString * _iconUrl; // +0x50
    NSString * _displayName; // +0x58
    NSString * _templateMsgId; // +0x60
    NSString * _objShortcutIconURL; // +0x68
    NSString * _objH5Url; // +0x70
    NSString * _objWeAppUserName; // +0x78
    NSString * _objWeAppPath; // +0x80
    unsigned long long _header_jump_type; // +0x88
    NSString * _display_name_desc; // +0x90
    NSString * _right_icon_url; // +0x98
    NSString * _right_desc_name; // +0xa0
    NSString * _finder_user_name; // +0xa8
    NSString * _finder_feedid; // +0xb0
    NSString * _finder_nonceid; // +0xb8
    NSString * _finder_feed_thumnail; // +0xc0
    NSString * _transaction_id; // +0xc8
    NSString * _header_background_img_url; // +0xd0
    NSString * _header_background_img_url_darkmode; // +0xd8
    NSString * _header_background_color; // +0xe0
    NSString * _header_background_color_darkmode; // +0xe8
    EcsKfTempleteMsgOrderInfo * _ecsKfTempleteMsgOrderInfo; // +0xf0
    EcsJumpInfo * _ecsJumpInfo; // +0xf8
}
- (BOOL)hideTime;
- (BOOL)hideTitle;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)pubTime;
- (void)setPubTime:(id)arg1;
- (id)first;
- (void)setFirst:(id)arg1;
- (id)firstColor;
- (void)setFirstColor:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (BOOL)hideTitleAndTime;
- (void)setHideTitleAndTime:(BOOL)arg1;
- (BOOL)showIconAndDisplayName;
- (void)setShowIconAndDisplayName:(BOOL)arg1;
- (BOOL)hideIconAndDisplayNameLine;
- (void)setHideIconAndDisplayNameLine:(BOOL)arg1;
- (BOOL)showComplaintButton;
- (void)setShowComplaintButton:(BOOL)arg1;
- (id)templateMsgId;
- (void)setTemplateMsgId:(id)arg1;
- (unsigned int)businessType;
- (void)setBusinessType:(unsigned int)arg1;
- (BOOL)objIsShowShortcutIcon;
- (void)setObjIsShowShortcutIcon:(BOOL)arg1;
- (id)objShortcutIconURL;
- (void)setObjShortcutIconURL:(id)arg1;
- (id)objH5Url;
- (void)setObjH5Url:(id)arg1;
- (id)objWeAppUserName;
- (void)setObjWeAppUserName:(id)arg1;
- (id)objWeAppPath;
- (void)setObjWeAppPath:(id)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (unsigned int)weappState;
- (void)setWeappState:(unsigned int)arg1;
- (void)setHideTitle:(BOOL)arg1;
- (void)setHideTime:(BOOL)arg1;
- (BOOL)isIgnoreHideTitleAndTimeFlag;
- (void)setIsIgnoreHideTitleAndTimeFlag:(BOOL)arg1;
- (unsigned int)paymsgStyle;
- (void)setPaymsgStyle:(unsigned int)arg1;
- (unsigned long long)header_jump_type;
- (void)setHeader_jump_type:(unsigned long long)arg1;
- (id)display_name_desc;
- (void)setDisplay_name_desc:(id)arg1;
- (BOOL)show_right_icon_and_desc_name;
- (void)setShow_right_icon_and_desc_name:(BOOL)arg1;
- (id)right_icon_url;
- (void)setRight_icon_url:(id)arg1;
- (id)right_desc_name;
- (void)setRight_desc_name:(id)arg1;
- (id)finder_user_name;
- (void)setFinder_user_name:(id)arg1;
- (BOOL)show_finder_feed_entry;
- (void)setShow_finder_feed_entry:(BOOL)arg1;
- (id)finder_feedid;
- (void)setFinder_feedid:(id)arg1;
- (id)finder_nonceid;
- (void)setFinder_nonceid:(id)arg1;
- (id)finder_feed_thumnail;
- (void)setFinder_feed_thumnail:(id)arg1;
- (id)transaction_id;
- (void)setTransaction_id:(id)arg1;
- (BOOL)show_header_background_img;
- (void)setShow_header_background_img:(BOOL)arg1;
- (id)header_background_img_url;
- (void)setHeader_background_img_url:(id)arg1;
- (id)header_background_img_url_darkmode;
- (void)setHeader_background_img_url_darkmode:(id)arg1;
- (id)header_background_color;
- (void)setHeader_background_color:(id)arg1;
- (id)header_background_color_darkmode;
- (void)setHeader_background_color_darkmode:(id)arg1;
- (id)ecsKfTempleteMsgOrderInfo;
- (void)setEcsKfTempleteMsgOrderInfo:(id)arg1;
- (id)ecsJumpInfo;
- (void)setEcsJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

