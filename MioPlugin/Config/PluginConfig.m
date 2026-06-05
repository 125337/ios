#import "PluginConfig.h"
#import "../Modules/GroupExit/GroupExitHook.h"
#import "../Core/LogManager.h"

@implementation PluginConfig

+ (instancetype)shared {
    static PluginConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[PluginConfig alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _notifyFormat = [kDefaultNotifyFormat copy];
        _dateFormat = [kDefaultDateFormat copy];
        _nameColorHex = [kDefaultNameColor copy];
        _timeColorHex = [kDefaultTimeColor copy];
        _contentColorHex = [kDefaultContentColor copy];
        _darkNameColorHex = [kDefaultDarkNameColor copy];
        _darkTimeColorHex = [kDefaultDarkTimeColor copy];
        _darkContentColorHex = [kDefaultDarkContentColor copy];
        _interceptNotifyTemplate = [kDefaultInterceptTemplate copy];
        _customNotifyFormat = [kDefaultCustomNotifyFormat copy];
        _revokeTemplate = [kDefaultRevokeTemplate copy];
        _notifySenderTemplate = [kDefaultNotifySenderTemplate copy];
        _sessionFormats = [NSMutableDictionary dictionary];
        _userFormats = [NSMutableDictionary dictionary];
        [self loadDefaults];
    }
    return self;
}

- (void)loadDefaults {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];

    if ([d objectForKey:@"MioPlugin_PreventRecall"] && ![d objectForKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]]) {
        _preventRecall = [d boolForKey:@"MioPlugin_PreventRecall"];
        [d setBool:_preventRecall forKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]];
        [d removeObjectForKey:@"MioPlugin_PreventRecall"];
        [d synchronize];
    } else {
        _preventRecall = [d boolForKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]];
        if (![d objectForKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]]) {
            _preventRecall = YES;
            [d setBool:YES forKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]];
            [d synchronize];
        }
    }

    _debugLogging = [d boolForKey:[kPluginPrefix stringByAppendingString:@"DebugLogging"]];
    _hideContent = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideContent"]];
    _noTip = [d boolForKey:[kPluginPrefix stringByAppendingString:@"NoTip"]];
    _bottomPosition = [d boolForKey:[kPluginPrefix stringByAppendingString:@"BottomPosition"]];
    _sendInterceptedContent = [d boolForKey:[kPluginPrefix stringByAppendingString:@"SendInterceptedContent"]];
    _interceptNotifyEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"InterceptNotifyEnabled"]];
    _customNotifyEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CustomNotifyEnabled"]];
    _clearUnreadEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ClearUnreadEnabled"]];
    _hideDiscoverBadge = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideDiscoverBadge"]];
    _hideEnterpriseBadge = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideEnterpriseBadge"]];
    _enableJoker = [d boolForKey:[kPluginPrefix stringByAppendingString:@"EnableJoker"]];
    _enableGroupExitMonitor = [d boolForKey:[kPluginPrefix stringByAppendingString:@"EnableGroupExitMonitor"]];
    _customColorsEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CustomColorsEnabled"]];
    _autoRedEnvelop = [d boolForKey:[kPluginPrefix stringByAppendingString:@"AutoRedEnvelop"]];
    _redEnvelopCatchMe = [d boolForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopCatchMe"]];
    _personalRedEnvelopEnable = [d boolForKey:[kPluginPrefix stringByAppendingString:@"PersonalRedEnvelopEnable"]];
    _redEnvelopeDetail = [d boolForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopeDetail"]];
    _redEnvelopTextFilterEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopTextFilterEnabled"]];
    _redEnvelopGroupFilterEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopGroupFilterEnabled"]];
    _redEnvelopAutoReply = [d boolForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopAutoReply"]];
    _redEnvelopAutoReplyInGroup = [d boolForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopAutoReplyInGroup"]];
    WPLog(@"Config", @"[LOAD] Loaded config from NSUserDefaults: auto=%d, catchMe=%d, personal=%d, detail=%d", 
          _autoRedEnvelop, _redEnvelopCatchMe, _personalRedEnvelopEnable, _redEnvelopeDetail);
    
    NSInteger delayVal = [d integerForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopDelay"]];
    _redEnvelopDelay = delayVal >= 0 ? (unsigned int)delayVal : 0;
    
    NSArray *blackList = [d arrayForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopBlackList"]];
    if (blackList) {
        _redEnvelopBlackList = blackList;
    } else {
        _redEnvelopBlackList = @[];
    }

    NSArray *groupFilterList = [d arrayForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopGroupFilterList"]];
    if (groupFilterList) {
        _redEnvelopGroupFilterList = groupFilterList;
    } else {
        _redEnvelopGroupFilterList = @[];
    }

    NSString *v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopTextFilter"]];
    if (v.length > 0) {
        _redEnvelopTextFilter = [v copy];
    } else {
        _redEnvelopTextFilter = @"";
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopAutoReplyStr"]];
    if (v.length > 0) {
        _redEnvelopAutoReplyStr = [v copy];
    } else {
        _redEnvelopAutoReplyStr = @"谢谢老板";
    }

    NSInteger autoConfirmDelay = [d integerForKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferDelay"]];
    _autoConfirmTransferDelay = autoConfirmDelay >= 0 ? (unsigned int)autoConfirmDelay : 0;
    _autoConfirmTransferMaxAmount = [d integerForKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferMaxAmount"]];
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferAutoReplyStr"]];
    if (v.length > 0) _autoConfirmTransferAutoReplyStr = [v copy];
    if (!_autoConfirmTransferAutoReplyStr) _autoConfirmTransferAutoReplyStr = @"已收到款项，谢谢！";

    _autoConfirmTransfer = [d boolForKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransfer"]];
    _autoConfirmTransferPersonal = [d boolForKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferPersonal"]];
    _autoConfirmTransferGroup = [d boolForKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferGroup"]];
    _autoConfirmTransferAutoReply = [d boolForKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferAutoReply"]];

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"NotifyFormat"]];
    if (v.length > 0) {
        _notifyFormat = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"DateFormat"]];
    if (v.length > 0) {
        _dateFormat = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CustomText"]];
    if (v.length > 0) {
        _customText = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"InterceptNotifyTemplate"]];
    if (v.length > 0) {
        _interceptNotifyTemplate = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CustomNotifyFormat"]];
    if (v.length > 0) {
        _customNotifyFormat = [v copy];
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"RevokeTemplate"]];
    if (v.length > 0) {
        _revokeTemplate = [v copy];
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"NameColorHex"]];
    if (v.length > 0) {
        _nameColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"TimeColorHex"]];
    if (v.length > 0) {
        _timeColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ContentColorHex"]];
    if (v.length > 0) {
        _contentColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"DarkNameColorHex"]];
    if (v.length > 0) {
        _darkNameColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"DarkTimeColorHex"]];
    if (v.length > 0) {
        _darkTimeColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"DarkContentColorHex"]];
    if (v.length > 0) {
        _darkContentColorHex = [v copy];
    }

    // 消息时间显示配置
    _showMessageTime = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ShowMessageTime"]];
    _messageTimeFontSize = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeFontSize"]];
    if (_messageTimeFontSize == 0) _messageTimeFontSize = 7.0;
    _messageTimeBoldFont = [d boolForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeBoldFont"]];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeFormat"]];
    if (v.length > 0) {
        _messageTimeFormat = [v copy];
    } else {
        _messageTimeFormat = @"HH:mm:ss";
    }

    v = [d objectForKey:[kPluginPrefix stringByAppendingString:@"CustomFormat"]];
    if (v.length > 0) {
        _messageTimeCustomFormat = [v copy];
    }
    
    _messageTimePosition = [d integerForKey:[kPluginPrefix stringByAppendingString:@"MessageTimePosition"]];
    if (_messageTimePosition < 0 || _messageTimePosition > 7) _messageTimePosition = 1;
    
    _messageTimeOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeOffsetX"]];
    _messageTimeOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeOffsetY"]];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeTextColor"]];
    if (v.length > 0) {
        _messageTimeTextColor = [v copy];
    } else {
        _messageTimeTextColor = @"#999999";
    }
    
    _messageTimeBubbleExtWidth = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeBubbleExtWidth"]];
    
    _messageTimeCornerRadius = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeCornerRadius"]];
    _disableLabelWidthAdjustment = [d boolForKey:[kPluginPrefix stringByAppendingString:@"DisableLabelWidthAdjustment"]];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"SenderTextColorHex"]];
    if (v.length > 0) {
        _senderTextColorHex = [v copy];
    } else {
        _senderTextColorHex = @"#808080";
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"SenderTextColorDarkHex"]];
    if (v.length > 0) {
        _senderTextColorDarkHex = [v copy];
    } else {
        _senderTextColorDarkHex = @"#BFBFBF";
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"SenderBackgroundColorHex"]];
    if (v.length > 0) {
        _senderBackgroundColorHex = [v copy];
    } else {
        _senderBackgroundColorHex = @"#00000000";
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"SenderBackgroundColorDarkHex"]];
    if (v.length > 0) {
        _senderBackgroundColorDarkHex = [v copy];
    } else {
        _senderBackgroundColorDarkHex = @"#00000000";
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ReceiverTextColorHex"]];
    if (v.length > 0) {
        _receiverTextColorHex = [v copy];
    } else {
        _receiverTextColorHex = @"#808080";
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ReceiverTextColorDarkHex"]];
    if (v.length > 0) {
        _receiverTextColorDarkHex = [v copy];
    } else {
        _receiverTextColorDarkHex = @"#BFBFBF";
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ReceiverBackgroundColorHex"]];
    if (v.length > 0) {
        _receiverBackgroundColorHex = [v copy];
    } else {
        _receiverBackgroundColorHex = @"#00000000";
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ReceiverBackgroundColorDarkHex"]];
    if (v.length > 0) {
        _receiverBackgroundColorDarkHex = [v copy];
    } else {
        _receiverBackgroundColorDarkHex = @"#00000000";
    }
    
    _hideChatTime = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideChatTime"]];
    
    _hideSeparatorLine = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideSeparatorLine"]];
    _hideRevokeHint = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideRevokeHint"]];
    _hidePatHint = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HidePatHint"]];
    _hideVoiceRedDot = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideVoiceRedDot"]];
    _hideBubbleBackground = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideBubbleBackground"]];
    _disableDictation = [d boolForKey:[kPluginPrefix stringByAppendingString:@"DisableDictation"]];
    
    _hideC2COtherAvatar = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideC2COtherAvatar"]];
    _hideC2CSelfAvatar = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideC2CSelfAvatar"]];
    _hideGroupOtherAvatar = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideGroupOtherAvatar"]];
    _hideGroupSelfAvatar = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideGroupSelfAvatar"]];
    _hideOAOtherAvatar = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideOAOtherAvatar"]];
    _hideOASelfAvatar = [d boolForKey:[kPluginPrefix stringByAppendingString:@"HideOASelfAvatar"]];
    
    // ========== 聊天顶栏配置 ==========
    _showChatAvatar = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ShowChatAvatar"]];
    _avatarTapFeedback = [d boolForKey:[kPluginPrefix stringByAppendingString:@"AvatarTapFeedback"]];
    _showAddTime = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ShowAddTime"]];
    _showGroupMemberCount = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ShowGroupMemberCount"]];
    _enableChatNameColor = [d boolForKey:[kPluginPrefix stringByAppendingString:@"EnableChatNameColor"]];
    _enableChatNameSize = [d boolForKey:[kPluginPrefix stringByAppendingString:@"EnableChatNameSize"]];
    _chatNameFontSize = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatNameFontSize"]];
    if (_chatNameFontSize == 0) _chatNameFontSize = 16.0;
    _enableMomentsNameColor = [d boolForKey:[kPluginPrefix stringByAppendingString:@"EnableMomentsNameColor"]];
    _enableMomentsNameSize = [d boolForKey:[kPluginPrefix stringByAppendingString:@"EnableMomentsNameSize"]];
    _momentsNameFontSize = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MomentsNameFontSize"]];
    if (_momentsNameFontSize == 0) _momentsNameFontSize = 16.0;

    _chatDisplayMode = [d integerForKey:[kPluginPrefix stringByAppendingString:@"ChatDisplayMode"]];
    if (_chatDisplayMode < 0 || _chatDisplayMode > 7) _chatDisplayMode = 3;

    _chatAvatarSize = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarSize"]];
    if (_chatAvatarSize == 0) _chatAvatarSize = 30.0;

    _chatAvatarSpacing = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarSpacing"]];
    if (_chatAvatarSpacing == 0) _chatAvatarSpacing = 6.0;

    _chatAvatarCornerRadius = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarCornerRadius"]];
    if (_chatAvatarCornerRadius == 0) _chatAvatarCornerRadius = 100.0;

    _chatNicknameFontSize = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatNicknameFontSize"]];
    if (_chatNicknameFontSize == 0) _chatNicknameFontSize = 9.0;

    _chatSeparatorSize = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorSize"]];
    if (_chatSeparatorSize == 0) _chatSeparatorSize = 30.0;

    _chatTitleViewWidth = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatTitleViewWidth"]];
    if (_chatTitleViewWidth == 0) _chatTitleViewWidth = 210.0;

    _chatVerticalOffset = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatVerticalOffset"]];
    _chatHorizontalOffset = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatHorizontalOffset"]];
    _chatNicknameOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatNicknameOffsetY"]];
    _chatNicknameOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ChatNicknameOffsetX"]];

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorText"]];
    if (v.length > 0) {
        _chatSeparatorText = [v copy];
    } else {
        _chatSeparatorText = @"";
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ChatGroupMemberCountSuffix"]];
    if (v.length > 0) {
        _chatGroupMemberCountSuffix = [v copy];
    } else {
        _chatGroupMemberCountSuffix = @"%u人";
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ChatAddTimeSuffixFormat"]];
    if (v.length > 0) {
        _chatAddTimeSuffixFormat = [v copy];
    } else {
        _chatAddTimeSuffixFormat = @"%ld天";
    }
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarBlacklist"]];
    if (v.length > 0) _chatAvatarBlacklist = [v copy];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorIcon"]];
    if (v.length > 0) _chatSeparatorIcon = [v copy];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorGIF"]];
    if (v.length > 0) _chatSeparatorGIF = [v copy];
    
    _showAddTimeSuffix = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ShowAddTimeSuffix"]];
    
    _notifySender = [d boolForKey:[kPluginPrefix stringByAppendingString:@"NotifySender"]];
    _notifySenderCooldown = [d doubleForKey:[kPluginPrefix stringByAppendingString:@"NotifySenderCooldown"]];
    
    _attachLayoutEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"AttachLayoutEnabled"]];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"AttachLayout_Columns"]];
    if (v.length > 0) _attachLayoutColumns = [v copy];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"AttachLayout_Rows"]];
    if (v.length > 0) _attachLayoutRows = [v copy];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"AddTimeSuffixFormat"]];
    if (v.length > 0) {
        _addTimeSuffixFormat = [v copy];
    } else {
        _addTimeSuffixFormat = @"(yyyy-MM-dd)";
    }

    @try {
        NSData *data = [d dataForKey:[kPluginPrefix stringByAppendingString:@"SessionFormats"]];
        if (data) {
            NSDictionary *loadedData = [NSKeyedUnarchiver unarchiveObjectWithData:data];
            if (loadedData) {
                if (![_sessionFormats isEqualToDictionary:loadedData]) {
                    _sessionFormats = [[NSMutableDictionary alloc] initWithDictionary:loadedData];
                }
            }
        }
        data = [d dataForKey:[kPluginPrefix stringByAppendingString:@"UserFormats"]];
        if (data) {
            NSDictionary *loadedData = [NSKeyedUnarchiver unarchiveObjectWithData:data];
            if (loadedData) {
                if (![_userFormats isEqualToDictionary:loadedData]) {
                    _userFormats = [[NSMutableDictionary alloc] initWithDictionary:loadedData];
                }
            }
        }
    } @catch (NSException *e) {}
    // ========== 文本占位配置 ==========
    _placeholderTextEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"PlaceholderTextEnabled"]];
    _placeholderTextBold = [d boolForKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_Bold"]];

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_Text"]];
    if (v.length > 0) {
        _placeholderTextText = [v copy];
    } else {
        _placeholderTextText = @"";
    }

    _placeholderTextFontSize = [d floatForKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_FontSize"]];
    if (_placeholderTextFontSize == 0) _placeholderTextFontSize = 15.0;

    _placeholderTextAlpha = [d floatForKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_Alpha"]];
    if (_placeholderTextAlpha == 0) _placeholderTextAlpha = 0.6;

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_ColorHex"]];
    if (v.length > 0) {
        _placeholderTextColorHex = [v copy];
    } else {
        _placeholderTextColorHex = @"#808080";
    }

    // ========== 列表圆角配置 ==========
    // 全局圆角
    _globalCornerRadiusEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"GlobalCornerRadiusEnabled"]];
    _globalCornerMyPageEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"GlobalCornerMyPageEnabled"]];
    _globalCornerContactsPageEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"GlobalCornerContactsPageEnabled"]];
    _globalCornerDiscoverPageEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"GlobalCornerDiscoverPageEnabled"]];
    // 列表圆角
    _listSearchCornerRadius = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ListSearchCornerRadius"]];
    _listHideRightQRCode = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ListHideRightQRCode"]];
    _listCellBorder = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ListCellBorder"]];

    CGFloat cr = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ListCellCornerRadius"]];
    _listCellCornerRadius = (cr > 0) ? cr : 18.0;

    CGFloat lm = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ListCellMargin"]];
    _listCellMargin = (lm > 0) ? lm : 9.0;

    CGFloat ps = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ListPinnedSessionTopSpacing"]];
    _listPinnedSessionTopSpacing = (ps > 0) ? ps : 15.0;

    CGFloat ns = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ListNormalSessionSpacing"]];
    _listNormalSessionSpacing = (ns > 0) ? ns : 15.0;

    NSString *clb = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCellLightBgColor"]];
    _listCellLightBgColor = [clb copy];

    NSString *cdb = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCellDarkBgColor"]];
    _listCellDarkBgColor = [cdb copy];

    NSString *clb2 = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCardLightBgColor"]];
    _listCardLightBgColor = [clb2 copy];

    NSString *cdb2 = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCardDarkBgColor"]];
    _listCardDarkBgColor = [cdb2 copy];

    CGFloat cbw = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ListCellBorderWidth"]];
    _listCellBorderWidth = (cbw > 0) ? cbw : 2.0;

    NSString *cbl = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCellBorderLightColor"]];
    _listCellBorderLightColor = [cbl copy];

    NSString *cbd = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListCellBorderDarkColor"]];
    _listCellBorderDarkColor = [cbd copy];

    _listDisableLabelWidthAdjustment = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ListDisableLabelWidthAdjustment"]];
    _listMediaCornerEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ListMediaCornerEnabled"]];

    _listProfileCardBorderEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ListProfileCardBorderEnabled"]];

    CGFloat pcbw = [d floatForKey:[kPluginPrefix stringByAppendingString:@"ListProfileCardBorderWidth"]];
    _listProfileCardBorderWidth = (pcbw > 0) ? pcbw : 2.0;

    NSString *pcbl = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListProfileCardBorderLightColor"]];
    _listProfileCardBorderLightColor = pcbl.length > 0 ? pcbl : @"#E5E5E5";

    NSString *pcbd = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ListProfileCardBorderDarkColor"]];
    _listProfileCardBorderDarkColor = pcbd.length > 0 ? pcbd : @"#3A3A3C";

    // ========== 资料卡背景配置 ==========
    // 资料卡片美化（新 UI）
    _cardBgBeautifyEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgBeautifyEnabled"]];
    _cardBgMaterialEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgMaterialEnabled"]];
    _cardBgCornerEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerEnabled"]];
    _cardBgCornerUseGlobal = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerUseGlobal"]];
    CGFloat cbcr = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerRadius"]];
    _cardBgCornerRadius = (cbcr > 0) ? cbcr : 18.0;
    CGFloat cbcm = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerMargin"]];
    _cardBgCornerMargin = (cbcm > 0) ? cbcm : 9.0;
    NSString *cbgc = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerBgColor"]];
    _cardBgCornerBgColor = cbgc.length > 0 ? cbgc : @"#FFFFFF";
    CGFloat cbsw = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgStrokeWidth"]];
    _cardBgStrokeWidth = (cbsw > 0) ? cbsw : 2.0;
    // 卡片背景（旧 UI）
    _cardBgEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];
    _cardBgHidden = [d boolForKey:[kPluginPrefix stringByAppendingString:@"CardBgHidden"]];
    _cardBgHeight = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgHeight"]];
    _cardBgListSpacing = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgListSpacing"]];

    // ========== 开发者工具配置 ==========
    _nsLogMonitorEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"NsLogMonitorEnabled"]];
    _nsLogLocalSave = [d boolForKey:[kPluginPrefix stringByAppendingString:@"NsLogLocalSave"]];
    NSString *nlkw = [d stringForKey:[kPluginPrefix stringByAppendingString:@"NsLogKeywords"]];
    _nsLogKeywords = nlkw.length > 0 ? nlkw : @"";
    _navMonitorEnabled = [d boolForKey:[kPluginPrefix stringByAppendingString:@"NavMonitorEnabled"]];

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightImagePath"]];
    if (v.length > 0) {
        _cardBgLightImagePath = [v copy];
        WPLog(@"CardBg-Diag", @"[CONFIG] cardBgLightImagePath=%@", _cardBgLightImagePath);
        WPLog(@"CardBg-Diag", @"[CONFIG] fileExists=%d", [[NSFileManager defaultManager] fileExistsAtPath:_cardBgLightImagePath]);
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkImagePath"]];
    if (v.length > 0) {
        _cardBgDarkImagePath = [v copy];
        WPLog(@"CardBg-Diag", @"[CONFIG] cardBgDarkImagePath=%@", _cardBgDarkImagePath);
        WPLog(@"CardBg-Diag", @"[CONFIG] fileExists=%d", [[NSFileManager defaultManager] fileExistsAtPath:_cardBgDarkImagePath]);
    }

    _cardBgFillMode = [d integerForKey:[kPluginPrefix stringByAppendingString:@"CardBgFillMode"]];
    _cardBgLightLayer = [d integerForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightLayer"]];
    _cardBgDarkLayer = [d integerForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkLayer"]];
    _cardBgLightOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetY"]];
    _cardBgDarkOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetY"]];
    _cardBgLightOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetX"]];
    _cardBgDarkOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetX"]];
}

- (void)save {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    WPLog(@"Config", @"[SAVE] save() called: auto=%d, catchMe=%d, personal=%d, detail=%d", 
          _autoRedEnvelop, _redEnvelopCatchMe, _personalRedEnvelopEnable, _redEnvelopeDetail);
    [d setBool:_preventRecall forKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]];
    [d setBool:_debugLogging forKey:[kPluginPrefix stringByAppendingString:@"DebugLogging"]];
    [d setBool:_hideContent forKey:[kPluginPrefix stringByAppendingString:@"HideContent"]];
    [d setBool:_noTip forKey:[kPluginPrefix stringByAppendingString:@"NoTip"]];
    [d setBool:_bottomPosition forKey:[kPluginPrefix stringByAppendingString:@"BottomPosition"]];
    [d setBool:_sendInterceptedContent forKey:[kPluginPrefix stringByAppendingString:@"SendInterceptedContent"]];
    [d setBool:_interceptNotifyEnabled forKey:[kPluginPrefix stringByAppendingString:@"InterceptNotifyEnabled"]];
    [d setBool:_customNotifyEnabled forKey:[kPluginPrefix stringByAppendingString:@"CustomNotifyEnabled"]];
    [d setBool:_clearUnreadEnabled forKey:[kPluginPrefix stringByAppendingString:@"ClearUnreadEnabled"]];
    [d setBool:_hideDiscoverBadge forKey:[kPluginPrefix stringByAppendingString:@"HideDiscoverBadge"]];
    [d setBool:_hideEnterpriseBadge forKey:[kPluginPrefix stringByAppendingString:@"HideEnterpriseBadge"]];
    [d setBool:_enableJoker forKey:[kPluginPrefix stringByAppendingString:@"EnableJoker"]];
    [d setBool:_enableGroupExitMonitor forKey:[kPluginPrefix stringByAppendingString:@"EnableGroupExitMonitor"]];
    [d setBool:_customColorsEnabled forKey:[kPluginPrefix stringByAppendingString:@"CustomColorsEnabled"]];
    [d setBool:_autoRedEnvelop forKey:[kPluginPrefix stringByAppendingString:@"AutoRedEnvelop"]];
    [d setBool:_redEnvelopCatchMe forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopCatchMe"]];
    [d setBool:_personalRedEnvelopEnable forKey:[kPluginPrefix stringByAppendingString:@"PersonalRedEnvelopEnable"]];
    [d setBool:_redEnvelopeDetail forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopeDetail"]];
    [d setBool:_redEnvelopTextFilterEnabled forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopTextFilterEnabled"]];
    [d setBool:_redEnvelopGroupFilterEnabled forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopGroupFilterEnabled"]];
    [d setBool:_redEnvelopAutoReply forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopAutoReply"]];
    [d setBool:_redEnvelopAutoReplyInGroup forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopAutoReplyInGroup"]];
    [d setInteger:(NSInteger)_redEnvelopDelay forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopDelay"]];
    if (_redEnvelopBlackList) {
        [d setObject:_redEnvelopBlackList forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopBlackList"]];
    }
    if (_redEnvelopGroupFilterList) {
        [d setObject:_redEnvelopGroupFilterList forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopGroupFilterList"]];
    }
    if (_redEnvelopTextFilter) {
        [d setObject:_redEnvelopTextFilter forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopTextFilter"]];
    }
    if (_redEnvelopAutoReplyStr) {
        [d setObject:_redEnvelopAutoReplyStr forKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopAutoReplyStr"]];
    }

    if (_notifyFormat) [d setObject:_notifyFormat forKey:[kPluginPrefix stringByAppendingString:@"NotifyFormat"]];
    if (_dateFormat) [d setObject:_dateFormat forKey:[kPluginPrefix stringByAppendingString:@"DateFormat"]];
    if (_customText) [d setObject:_customText forKey:[kPluginPrefix stringByAppendingString:@"CustomText"]];
    if (_interceptNotifyTemplate) [d setObject:_interceptNotifyTemplate forKey:[kPluginPrefix stringByAppendingString:@"InterceptNotifyTemplate"]];
    if (_customNotifyFormat) [d setObject:_customNotifyFormat forKey:[kPluginPrefix stringByAppendingString:@"CustomNotifyFormat"]];
    if (_revokeTemplate) [d setObject:_revokeTemplate forKey:[kPluginPrefix stringByAppendingString:@"RevokeTemplate"]];
    if (_notifySenderTemplate) [d setObject:_notifySenderTemplate forKey:[kPluginPrefix stringByAppendingString:@"NotifySenderTemplate"]];
    [d setBool:_notifySender forKey:[kPluginPrefix stringByAppendingString:@"NotifySender"]];
    [d setDouble:_notifySenderCooldown forKey:[kPluginPrefix stringByAppendingString:@"NotifySenderCooldown"]];
    if (_attachLayoutColumns) {
        [d setObject:_attachLayoutColumns forKey:[kPluginPrefix stringByAppendingString:@"AttachLayout_Columns"]];
    }
    if (_attachLayoutRows) {
        [d setObject:_attachLayoutRows forKey:[kPluginPrefix stringByAppendingString:@"AttachLayout_Rows"]];
    }
    [d setBool:_attachLayoutEnabled forKey:[kPluginPrefix stringByAppendingString:@"AttachLayoutEnabled"]];
    [d setInteger:(NSInteger)_autoConfirmTransferDelay forKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferDelay"]];
    [d setObject:@(_autoConfirmTransferMaxAmount) forKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferMaxAmount"]];
    if (_autoConfirmTransferAutoReplyStr) {
        [d setObject:_autoConfirmTransferAutoReplyStr forKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferAutoReplyStr"]];
    }
    [d setBool:_autoConfirmTransfer forKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransfer"]];
    [d setBool:_autoConfirmTransferPersonal forKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferPersonal"]];
    [d setBool:_autoConfirmTransferGroup forKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferGroup"]];
    [d setBool:_autoConfirmTransferAutoReply forKey:[kPluginPrefix stringByAppendingString:@"AutoConfirmTransferAutoReply"]];

    [d setObject:_nameColorHex forKey:[kPluginPrefix stringByAppendingString:@"NameColorHex"]];
    [d setObject:_timeColorHex forKey:[kPluginPrefix stringByAppendingString:@"TimeColorHex"]];
    [d setObject:_contentColorHex forKey:[kPluginPrefix stringByAppendingString:@"ContentColorHex"]];
    [d setObject:_darkNameColorHex forKey:[kPluginPrefix stringByAppendingString:@"DarkNameColorHex"]];
    [d setObject:_darkTimeColorHex forKey:[kPluginPrefix stringByAppendingString:@"DarkTimeColorHex"]];
    [d setObject:_darkContentColorHex forKey:[kPluginPrefix stringByAppendingString:@"DarkContentColorHex"]];

    [d setBool:_showMessageTime forKey:[kPluginPrefix stringByAppendingString:@"ShowMessageTime"]];
    [d setFloat:_messageTimeFontSize forKey:[kPluginPrefix stringByAppendingString:@"MessageTimeFontSize"]];
    [d setBool:_messageTimeBoldFont forKey:[kPluginPrefix stringByAppendingString:@"MessageTimeBoldFont"]];
    if (_messageTimeCustomFormat) {
        [d setObject:_messageTimeCustomFormat forKey:[kPluginPrefix stringByAppendingString:@"CustomFormat"]];
    }
    if (_messageTimeFormat) {
        [d setObject:_messageTimeFormat forKey:[kPluginPrefix stringByAppendingString:@"MessageTimeFormat"]];
    }
    [d setInteger:_messageTimePosition forKey:[kPluginPrefix stringByAppendingString:@"MessageTimePosition"]];
    [d setFloat:_messageTimeOffsetX forKey:[kPluginPrefix stringByAppendingString:@"MessageTimeOffsetX"]];
    [d setFloat:_messageTimeOffsetY forKey:[kPluginPrefix stringByAppendingString:@"MessageTimeOffsetY"]];
    if (_messageTimeTextColor) {
        [d setObject:_messageTimeTextColor forKey:[kPluginPrefix stringByAppendingString:@"MessageTimeTextColor"]];
    }
    [d setFloat:_messageTimeBubbleExtWidth forKey:[kPluginPrefix stringByAppendingString:@"MessageTimeBubbleExtWidth"]];
    [d setFloat:_messageTimeCornerRadius forKey:[kPluginPrefix stringByAppendingString:@"MessageTimeCornerRadius"]];
    [d setBool:_disableLabelWidthAdjustment forKey:[kPluginPrefix stringByAppendingString:@"DisableLabelWidthAdjustment"]];
    if (_senderTextColorHex) [d setObject:_senderTextColorHex forKey:[kPluginPrefix stringByAppendingString:@"SenderTextColorHex"]];
    if (_senderTextColorDarkHex) [d setObject:_senderTextColorDarkHex forKey:[kPluginPrefix stringByAppendingString:@"SenderTextColorDarkHex"]];
    if (_senderBackgroundColorHex) [d setObject:_senderBackgroundColorHex forKey:[kPluginPrefix stringByAppendingString:@"SenderBackgroundColorHex"]];
    if (_senderBackgroundColorDarkHex) [d setObject:_senderBackgroundColorDarkHex forKey:[kPluginPrefix stringByAppendingString:@"SenderBackgroundColorDarkHex"]];
    if (_receiverTextColorHex) [d setObject:_receiverTextColorHex forKey:[kPluginPrefix stringByAppendingString:@"ReceiverTextColorHex"]];
    if (_receiverTextColorDarkHex) [d setObject:_receiverTextColorDarkHex forKey:[kPluginPrefix stringByAppendingString:@"ReceiverTextColorDarkHex"]];
    if (_receiverBackgroundColorHex) [d setObject:_receiverBackgroundColorHex forKey:[kPluginPrefix stringByAppendingString:@"ReceiverBackgroundColorHex"]];
    if (_receiverBackgroundColorDarkHex) [d setObject:_receiverBackgroundColorDarkHex forKey:[kPluginPrefix stringByAppendingString:@"ReceiverBackgroundColorDarkHex"]];
    [d setBool:_hideChatTime forKey:[kPluginPrefix stringByAppendingString:@"HideChatTime"]];
    [d setBool:_hideSeparatorLine forKey:[kPluginPrefix stringByAppendingString:@"HideSeparatorLine"]];
    [d setBool:_hideRevokeHint forKey:[kPluginPrefix stringByAppendingString:@"HideRevokeHint"]];
    [d setBool:_hidePatHint forKey:[kPluginPrefix stringByAppendingString:@"HidePatHint"]];
    [d setBool:_hideVoiceRedDot forKey:[kPluginPrefix stringByAppendingString:@"HideVoiceRedDot"]];
    [d setBool:_hideBubbleBackground forKey:[kPluginPrefix stringByAppendingString:@"HideBubbleBackground"]];
    [d setBool:_disableDictation forKey:[kPluginPrefix stringByAppendingString:@"DisableDictation"]];
    [d setBool:_hideC2COtherAvatar forKey:[kPluginPrefix stringByAppendingString:@"HideC2COtherAvatar"]];
    [d setBool:_hideC2CSelfAvatar forKey:[kPluginPrefix stringByAppendingString:@"HideC2CSelfAvatar"]];
    [d setBool:_hideGroupOtherAvatar forKey:[kPluginPrefix stringByAppendingString:@"HideGroupOtherAvatar"]];
    [d setBool:_hideGroupSelfAvatar forKey:[kPluginPrefix stringByAppendingString:@"HideGroupSelfAvatar"]];
    [d setBool:_hideOAOtherAvatar forKey:[kPluginPrefix stringByAppendingString:@"HideOAOtherAvatar"]];
    [d setBool:_hideOASelfAvatar forKey:[kPluginPrefix stringByAppendingString:@"HideOASelfAvatar"]];
    // ========== 聊天顶栏配置 ==========
    [d setBool:_showChatAvatar forKey:[kPluginPrefix stringByAppendingString:@"ShowChatAvatar"]];
    [d setBool:_avatarTapFeedback forKey:[kPluginPrefix stringByAppendingString:@"AvatarTapFeedback"]];
    [d setBool:_showAddTime forKey:[kPluginPrefix stringByAppendingString:@"ShowAddTime"]];
    [d setBool:_showGroupMemberCount forKey:[kPluginPrefix stringByAppendingString:@"ShowGroupMemberCount"]];
    [d setBool:_enableChatNameColor forKey:[kPluginPrefix stringByAppendingString:@"EnableChatNameColor"]];
    [d setBool:_enableChatNameSize forKey:[kPluginPrefix stringByAppendingString:@"EnableChatNameSize"]];
    [d setFloat:_chatNameFontSize forKey:[kPluginPrefix stringByAppendingString:@"ChatNameFontSize"]];
    [d setBool:_enableMomentsNameColor forKey:[kPluginPrefix stringByAppendingString:@"EnableMomentsNameColor"]];
    [d setBool:_enableMomentsNameSize forKey:[kPluginPrefix stringByAppendingString:@"EnableMomentsNameSize"]];
    [d setFloat:_momentsNameFontSize forKey:[kPluginPrefix stringByAppendingString:@"MomentsNameFontSize"]];
    [d setInteger:_chatDisplayMode forKey:[kPluginPrefix stringByAppendingString:@"ChatDisplayMode"]];
    [d setFloat:_chatAvatarSize forKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarSize"]];
    [d setFloat:_chatAvatarSpacing forKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarSpacing"]];
    [d setFloat:_chatAvatarCornerRadius forKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarCornerRadius"]];
    [d setFloat:_chatNicknameFontSize forKey:[kPluginPrefix stringByAppendingString:@"ChatNicknameFontSize"]];
    [d setFloat:_chatSeparatorSize forKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorSize"]];
    [d setFloat:_chatTitleViewWidth forKey:[kPluginPrefix stringByAppendingString:@"ChatTitleViewWidth"]];
    [d setFloat:_chatVerticalOffset forKey:[kPluginPrefix stringByAppendingString:@"ChatVerticalOffset"]];
    [d setFloat:_chatHorizontalOffset forKey:[kPluginPrefix stringByAppendingString:@"ChatHorizontalOffset"]];
    [d setFloat:_chatNicknameOffsetY forKey:[kPluginPrefix stringByAppendingString:@"ChatNicknameOffsetY"]];
    [d setFloat:_chatNicknameOffsetX forKey:[kPluginPrefix stringByAppendingString:@"ChatNicknameOffsetX"]];
    if (_chatSeparatorText) {
        [d setObject:_chatSeparatorText forKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorText"]];
    }
    if (_chatGroupMemberCountSuffix) {
        [d setObject:_chatGroupMemberCountSuffix forKey:[kPluginPrefix stringByAppendingString:@"ChatGroupMemberCountSuffix"]];
    }
    if (_chatAddTimeSuffixFormat) {
        [d setObject:_chatAddTimeSuffixFormat forKey:[kPluginPrefix stringByAppendingString:@"ChatAddTimeSuffixFormat"]];
    }
    if (_chatAvatarBlacklist) {
        [d setObject:_chatAvatarBlacklist forKey:[kPluginPrefix stringByAppendingString:@"ChatAvatarBlacklist"]];
    }
    if (_chatSeparatorIcon) {
        [d setObject:_chatSeparatorIcon forKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorIcon"]];
    }
    if (_chatSeparatorGIF) {
        [d setObject:_chatSeparatorGIF forKey:[kPluginPrefix stringByAppendingString:@"ChatSeparatorGIF"]];
    }
    [d setBool:_showAddTimeSuffix forKey:[kPluginPrefix stringByAppendingString:@"ShowAddTimeSuffix"]];
    
    if (_addTimeSuffixFormat) {
        [d setObject:_addTimeSuffixFormat forKey:[kPluginPrefix stringByAppendingString:@"AddTimeSuffixFormat"]];
    }

    @try {
        [d setObject:[NSKeyedArchiver archivedDataWithRootObject:_sessionFormats] forKey:[kPluginPrefix stringByAppendingString:@"SessionFormats"]];
        [d setObject:[NSKeyedArchiver archivedDataWithRootObject:_userFormats] forKey:[kPluginPrefix stringByAppendingString:@"UserFormats"]];
    } @catch (NSException *e) {}
    // ========== 文本占位配置 ==========
    [d setBool:_placeholderTextEnabled forKey:[kPluginPrefix stringByAppendingString:@"PlaceholderTextEnabled"]];
    [d setBool:_placeholderTextBold forKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_Bold"]];
    if (_placeholderTextText) [d setObject:_placeholderTextText forKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_Text"]];
    [d setFloat:_placeholderTextFontSize forKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_FontSize"]];
    [d setFloat:_placeholderTextAlpha forKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_Alpha"]];
    if (_placeholderTextColorHex) [d setObject:_placeholderTextColorHex forKey:[kPluginPrefix stringByAppendingString:@"PlaceholderText_ColorHex"]];

    // ========== 列表圆角配置 ==========
    // 全局圆角
    [d setBool:_globalCornerRadiusEnabled forKey:[kPluginPrefix stringByAppendingString:@"GlobalCornerRadiusEnabled"]];
    [d setBool:_globalCornerMyPageEnabled forKey:[kPluginPrefix stringByAppendingString:@"GlobalCornerMyPageEnabled"]];
    [d setBool:_globalCornerContactsPageEnabled forKey:[kPluginPrefix stringByAppendingString:@"GlobalCornerContactsPageEnabled"]];
    [d setBool:_globalCornerDiscoverPageEnabled forKey:[kPluginPrefix stringByAppendingString:@"GlobalCornerDiscoverPageEnabled"]];
    // 列表圆角
    [d setBool:_listSearchCornerRadius forKey:[kPluginPrefix stringByAppendingString:@"ListSearchCornerRadius"]];
    [d setBool:_listHideRightQRCode forKey:[kPluginPrefix stringByAppendingString:@"ListHideRightQRCode"]];
    [d setBool:_listCellBorder forKey:[kPluginPrefix stringByAppendingString:@"ListCellBorder"]];
    [d setFloat:_listCellCornerRadius forKey:[kPluginPrefix stringByAppendingString:@"ListCellCornerRadius"]];
    [d setFloat:_listCellMargin forKey:[kPluginPrefix stringByAppendingString:@"ListCellMargin"]];
    [d setFloat:_listPinnedSessionTopSpacing forKey:[kPluginPrefix stringByAppendingString:@"ListPinnedSessionTopSpacing"]];
    [d setFloat:_listNormalSessionSpacing forKey:[kPluginPrefix stringByAppendingString:@"ListNormalSessionSpacing"]];
    if (_listCellLightBgColor) [d setObject:_listCellLightBgColor forKey:[kPluginPrefix stringByAppendingString:@"ListCellLightBgColor"]];
    if (_listCellDarkBgColor) [d setObject:_listCellDarkBgColor forKey:[kPluginPrefix stringByAppendingString:@"ListCellDarkBgColor"]];
    if (_listCardLightBgColor) [d setObject:_listCardLightBgColor forKey:[kPluginPrefix stringByAppendingString:@"ListCardLightBgColor"]];
    if (_listCardDarkBgColor) [d setObject:_listCardDarkBgColor forKey:[kPluginPrefix stringByAppendingString:@"ListCardDarkBgColor"]];
    [d setFloat:_listCellBorderWidth forKey:[kPluginPrefix stringByAppendingString:@"ListCellBorderWidth"]];
    if (_listCellBorderLightColor) [d setObject:_listCellBorderLightColor forKey:[kPluginPrefix stringByAppendingString:@"ListCellBorderLightColor"]];
    if (_listCellBorderDarkColor) [d setObject:_listCellBorderDarkColor forKey:[kPluginPrefix stringByAppendingString:@"ListCellBorderDarkColor"]];
    [d setBool:_listDisableLabelWidthAdjustment forKey:[kPluginPrefix stringByAppendingString:@"ListDisableLabelWidthAdjustment"]];
    [d setBool:_listMediaCornerEnabled forKey:[kPluginPrefix stringByAppendingString:@"ListMediaCornerEnabled"]];
    
    [d setBool:_listProfileCardBorderEnabled forKey:[kPluginPrefix stringByAppendingString:@"ListProfileCardBorderEnabled"]];
    [d setFloat:_listProfileCardBorderWidth forKey:[kPluginPrefix stringByAppendingString:@"ListProfileCardBorderWidth"]];
    if (_listProfileCardBorderLightColor) [d setObject:_listProfileCardBorderLightColor forKey:[kPluginPrefix stringByAppendingString:@"ListProfileCardBorderLightColor"]];
    if (_listProfileCardBorderDarkColor) [d setObject:_listProfileCardBorderDarkColor forKey:[kPluginPrefix stringByAppendingString:@"ListProfileCardBorderDarkColor"]];

    // ========== 资料卡背景配置 ==========
    // 资料卡片美化（新 UI）
    [d setBool:_cardBgBeautifyEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgBeautifyEnabled"]];
    [d setBool:_cardBgMaterialEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgMaterialEnabled"]];
    [d setBool:_cardBgCornerEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerEnabled"]];
    [d setBool:_cardBgCornerUseGlobal forKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerUseGlobal"]];
    [d setFloat:_cardBgCornerRadius forKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerRadius"]];
    [d setFloat:_cardBgCornerMargin forKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerMargin"]];
    if (_cardBgCornerBgColor) [d setObject:_cardBgCornerBgColor forKey:[kPluginPrefix stringByAppendingString:@"CardBgCornerBgColor"]];
    [d setFloat:_cardBgStrokeWidth forKey:[kPluginPrefix stringByAppendingString:@"CardBgStrokeWidth"]];
    // 卡片背景（旧 UI）
    [d setBool:_cardBgEnabled forKey:[kPluginPrefix stringByAppendingString:@"CardBgEnabled"]];
    [d setBool:_cardBgHidden forKey:[kPluginPrefix stringByAppendingString:@"CardBgHidden"]];
    [d setFloat:_cardBgHeight forKey:[kPluginPrefix stringByAppendingString:@"CardBgHeight"]];
    [d setFloat:_cardBgListSpacing forKey:[kPluginPrefix stringByAppendingString:@"CardBgListSpacing"]];
    if (_cardBgLightImagePath) {
        [d setObject:_cardBgLightImagePath forKey:[kPluginPrefix stringByAppendingString:@"CardBgLightImagePath"]];
    } else {
        [d removeObjectForKey:[kPluginPrefix stringByAppendingString:@"CardBgLightImagePath"]];
    }
    if (_cardBgDarkImagePath) {
        [d setObject:_cardBgDarkImagePath forKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkImagePath"]];
    } else {
        [d removeObjectForKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkImagePath"]];
    }
    [d setInteger:_cardBgFillMode forKey:[kPluginPrefix stringByAppendingString:@"CardBgFillMode"]];
    [d setInteger:_cardBgLightLayer forKey:[kPluginPrefix stringByAppendingString:@"CardBgLightLayer"]];
    [d setInteger:_cardBgDarkLayer forKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkLayer"]];
    [d setFloat:_cardBgLightOffsetY forKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetY"]];
    [d setFloat:_cardBgDarkOffsetY forKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetY"]];
    [d setFloat:_cardBgLightOffsetX forKey:[kPluginPrefix stringByAppendingString:@"CardBgLightOffsetX"]];
    [d setFloat:_cardBgDarkOffsetX forKey:[kPluginPrefix stringByAppendingString:@"CardBgDarkOffsetX"]];

    // ========== 开发者工具配置 ==========
    [d setBool:_nsLogMonitorEnabled forKey:[kPluginPrefix stringByAppendingString:@"NsLogMonitorEnabled"]];
    [d setBool:_nsLogLocalSave forKey:[kPluginPrefix stringByAppendingString:@"NsLogLocalSave"]];
    if (_nsLogKeywords) {
        [d setObject:_nsLogKeywords forKey:[kPluginPrefix stringByAppendingString:@"NsLogKeywords"]];
    } else {
        [d removeObjectForKey:[kPluginPrefix stringByAppendingString:@"NsLogKeywords"]];
    }
    [d setBool:_navMonitorEnabled forKey:[kPluginPrefix stringByAppendingString:@"NavMonitorEnabled"]];

    [d synchronize];
    WPLog(@"Config", @"[OK] save() completed - NSUserDefaults synchronized");
}

- (void)resetAllConfig {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    NSDictionary *all = [d dictionaryRepresentation];
    for (NSString *key in all) {
        if ([key hasPrefix:kPluginPrefix]) {
            [d removeObjectForKey:key];
        }
    }
    
    [d removeObjectForKey:@"AttachLayout_Columns"];
    [d removeObjectForKey:@"AttachLayout_Rows"];
    
    [d synchronize];
    
    // 重新加载默认值
    [self loadDefaults];
    WPLog(@"Config", @"[RESET] All plugin configs wiped, defaults reloaded");
}

- (NSString *)notifyFormatForSession:(NSString *)session user:(NSString *)user {
    if (user.length > 0) {
        NSString *fmt = _userFormats[user];
        if (fmt.length > 0) return fmt;
    }
    if (session.length > 0) {
        NSString *fmt = _sessionFormats[session];
        if (fmt.length > 0) return fmt;
    }
    return _notifyFormat;
}

- (UIColor *)colorFromHex:(NSString *)hex {
    if (!hex.length) return nil;
    NSString *clean = [hex stringByReplacingOccurrencesOfString:@"#" withString:@""];
    if (clean.length < 6) return nil;
    unsigned int r = 0, g = 0, b = 0, a = 255;
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(0, 2)]] scanHexInt:&r];
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(2, 2)]] scanHexInt:&g];
    [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(4, 2)]] scanHexInt:&b];
    if (clean.length >= 8) {
        [[NSScanner scannerWithString:[clean substringWithRange:NSMakeRange(6, 2)]] scanHexInt:&a];
    }
    return [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a / 255.0];
}

- (NSString *)hexFromColor:(UIColor *)color {
    if (!color) return nil;
    CGFloat r, g, b, a;
    [color getRed:&r green:&g blue:&b alpha:&a];
    return [NSString stringWithFormat:@"#%02X%02X%02X",
            (int)(r * 255), (int)(g * 255), (int)(b * 255)];
}

- (BOOL)isDarkMode {
    if (@available(iOS 13.0, *)) {
        return UITraitCollection.currentTraitCollection.userInterfaceStyle == UIUserInterfaceStyleDark;
    }
    return NO;
}

- (UIColor *)nameColor {
    if (!_customColorsEnabled) {
        return [UIColor colorWithRed:250.0/255.0 green:81.0/255.0 blue:81.0/255.0 alpha:1.0];
    }
    return [self colorFromHex:[self isDarkMode] ? _darkNameColorHex : _nameColorHex]
        ?: [UIColor colorWithRed:250.0/255.0 green:81.0/255.0 blue:81.0/255.0 alpha:1.0];
}

- (UIColor *)timeColor {
    if (!_customColorsEnabled) {
        return [UIColor colorWithRed:250.0/255.0 green:81.0/255.0 blue:81.0/255.0 alpha:1.0];
    }
    return [self colorFromHex:[self isDarkMode] ? _darkTimeColorHex : _timeColorHex]
        ?: [UIColor colorWithRed:250.0/255.0 green:81.0/255.0 blue:81.0/255.0 alpha:1.0];
}

- (UIColor *)contentColor {
    if (!_customColorsEnabled) {
        return [UIColor colorWithRed:153.0/255.0 green:153.0/255.0 blue:153.0/255.0 alpha:1.0];
    }
    return [self colorFromHex:[self isDarkMode] ? _darkContentColorHex : _contentColorHex]
        ?: [UIColor colorWithRed:153.0/255.0 green:153.0/255.0 blue:153.0/255.0 alpha:1.0];
}

- (NSString *)applyTemplate:(NSString *)tmpl time:(NSString *)time name:(NSString *)name content:(NSString *)content {
    NSString *result = [tmpl copy];
    result = [result stringByReplacingOccurrencesOfString:@"{time}" withString:time ?: @""];
    result = [result stringByReplacingOccurrencesOfString:@"{name}" withString:name ?: @""];
    result = [result stringByReplacingOccurrencesOfString:@"{content}" withString:content ?: @""];
    return result;
}

- (NSString *)applyRevokeTemplate:(NSString *)tmpl name:(NSString *)name content:(NSString *)content createTime:(unsigned int)createTime {
    if (!tmpl.length) return nil;
    NSString *result = [tmpl copy];
    
    // 用户名
    result = [result stringByReplacingOccurrencesOfString:@"{用户名}" withString:name ?: @""];
    // 内容
    result = [result stringByReplacingOccurrencesOfString:@"{内容}" withString:content ?: @""];
    
    // 时间占位符
    NSDate *date = createTime > 0 ? [NSDate dateWithTimeIntervalSince1970:createTime] : [NSDate date];
    NSCalendar *cal = [NSCalendar currentCalendar];
    NSDateComponents *comp = [cal components:(NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay |
                                               NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond)
                                   fromDate:date];
    
    result = [result stringByReplacingOccurrencesOfString:@"{yyyy}" withString:[NSString stringWithFormat:@"%04ld", (long)comp.year]];
    result = [result stringByReplacingOccurrencesOfString:@"{MM}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.month]];
    result = [result stringByReplacingOccurrencesOfString:@"{dd}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.day]];
    result = [result stringByReplacingOccurrencesOfString:@"{HH}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.hour]];
    result = [result stringByReplacingOccurrencesOfString:@"{mm}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.minute]];
    result = [result stringByReplacingOccurrencesOfString:@"{ss}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.second]];
    
    return result;
}

- (void)setEnableGroupExitMonitor:(BOOL)enableGroupExitMonitor {
    if (_enableGroupExitMonitor != enableGroupExitMonitor) {
        _enableGroupExitMonitor = enableGroupExitMonitor;
        
        if (enableGroupExitMonitor) {
            [GroupExitHook startMonitoring];
        } else {
            [GroupExitHook stopMonitoring];
        }
        
        [self save];
    }
}

@end
