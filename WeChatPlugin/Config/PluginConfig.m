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
        _sessionFormats = [[NSMutableDictionary dictionary] retain];
        _userFormats = [[NSMutableDictionary dictionary] retain];
        [self loadDefaults];
    }
    return self;
}

- (void)dealloc {
    [_notifyFormat release];
    [_dateFormat release];
    [_nameColorHex release];
    [_timeColorHex release];
    [_contentColorHex release];
    [_darkNameColorHex release];
    [_darkTimeColorHex release];
    [_darkContentColorHex release];
    [_interceptNotifyTemplate release];
    [_customNotifyFormat release];
    [_revokeTemplate release];
    [_notifySenderTemplate release];
    [_customText release];
    [_redEnvelopTextFilter release];
    [_redEnvelopAutoReplyStr release];
    [_messageTimeFormat release];
    [_messageTimeCustomFormat release];
    [_messageTimeTextColor release];
    [_senderTextColorHex release];
    [_senderTextColorDarkHex release];
    [_senderBackgroundColorHex release];
    [_senderBackgroundColorDarkHex release];
    [_receiverTextColorHex release];
    [_receiverTextColorDarkHex release];
    [_receiverBackgroundColorHex release];
    [_receiverBackgroundColorDarkHex release];
    [_addTimeSuffixFormat release];
    [_redEnvelopBlackList release];
    [_redEnvelopGroupFilterList release];
    [_sessionFormats release];
    [_userFormats release];
    [super dealloc];
}

- (void)loadDefaults {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];

    if ([d objectForKey:@"WeChatPlugin_PreventRecall"] && ![d objectForKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]]) {
        _preventRecall = [d boolForKey:@"WeChatPlugin_PreventRecall"];
        [d setBool:_preventRecall forKey:[kPluginPrefix stringByAppendingString:@"PreventRecall"]];
        [d removeObjectForKey:@"WeChatPlugin_PreventRecall"];
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
        [_redEnvelopBlackList release];
        _redEnvelopBlackList = [blackList retain];
    } else {
        _redEnvelopBlackList = [@[] retain];
    }

    NSArray *groupFilterList = [d arrayForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopGroupFilterList"]];
    if (groupFilterList) {
        [_redEnvelopGroupFilterList release];
        _redEnvelopGroupFilterList = [groupFilterList retain];
    } else {
        _redEnvelopGroupFilterList = [@[] retain];
    }

    NSString *v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopTextFilter"]];
    if (v.length > 0) {
        [_redEnvelopTextFilter release];
        _redEnvelopTextFilter = [v copy];
    } else {
        _redEnvelopTextFilter = [@"" retain];
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"RedEnvelopAutoReplyStr"]];
    if (v.length > 0) {
        [_redEnvelopAutoReplyStr release];
        _redEnvelopAutoReplyStr = [v copy];
    } else {
        _redEnvelopAutoReplyStr = [@"谢谢老板" retain];
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"NotifyFormat"]];
    if (v.length > 0) {
        [_notifyFormat release];
        _notifyFormat = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"DateFormat"]];
    if (v.length > 0) {
        [_dateFormat release];
        _dateFormat = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CustomText"]];
    if (v.length > 0) {
        [_customText release];
        _customText = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"InterceptNotifyTemplate"]];
    if (v.length > 0) {
        [_interceptNotifyTemplate release];
        _interceptNotifyTemplate = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"CustomNotifyFormat"]];
    if (v.length > 0) {
        [_customNotifyFormat release];
        _customNotifyFormat = [v copy];
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"RevokeTemplate"]];
    if (v.length > 0) {
        [_revokeTemplate release];
        _revokeTemplate = [v copy];
    }

    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"NameColorHex"]];
    if (v.length > 0) {
        [_nameColorHex release];
        _nameColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"TimeColorHex"]];
    if (v.length > 0) {
        [_timeColorHex release];
        _timeColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ContentColorHex"]];
    if (v.length > 0) {
        [_contentColorHex release];
        _contentColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"DarkNameColorHex"]];
    if (v.length > 0) {
        [_darkNameColorHex release];
        _darkNameColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"DarkTimeColorHex"]];
    if (v.length > 0) {
        [_darkTimeColorHex release];
        _darkTimeColorHex = [v copy];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"DarkContentColorHex"]];
    if (v.length > 0) {
        [_darkContentColorHex release];
        _darkContentColorHex = [v copy];
    }

    // 消息时间显示配置
    _showMessageTime = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ShowMessageTime"]];
    _messageTimeFontSize = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeFontSize"]];
    if (_messageTimeFontSize == 0) _messageTimeFontSize = 7.0;
    _messageTimeBoldFont = [d boolForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeBoldFont"]];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeFormat"]];
    if (v.length > 0) {
        [_messageTimeFormat release];
        _messageTimeFormat = [v copy];
    } else {
        _messageTimeFormat = [@"HH:mm:ss" retain];
    }

    v = [d objectForKey:[kPluginPrefix stringByAppendingString:@"CustomFormat"]];
    if (v.length > 0) {
        [_messageTimeCustomFormat release];
        _messageTimeCustomFormat = [v copy];
    }
    
    _messageTimePosition = [d integerForKey:[kPluginPrefix stringByAppendingString:@"MessageTimePosition"]];
    if (_messageTimePosition < 0 || _messageTimePosition > 7) _messageTimePosition = 1;
    
    _messageTimeOffsetX = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeOffsetX"]];
    _messageTimeOffsetY = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeOffsetY"]];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeTextColor"]];
    if (v.length > 0) {
        [_messageTimeTextColor release];
        _messageTimeTextColor = [v copy];
    } else {
        _messageTimeTextColor = [@"#999999" retain];
    }
    
    _messageTimeBubbleExtWidth = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeBubbleExtWidth"]];
    
    _messageTimeCornerRadius = [d floatForKey:[kPluginPrefix stringByAppendingString:@"MessageTimeCornerRadius"]];
    _disableLabelWidthAdjustment = [d boolForKey:[kPluginPrefix stringByAppendingString:@"DisableLabelWidthAdjustment"]];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"SenderTextColorHex"]];
    if (v.length > 0) {
        [_senderTextColorHex release];
        _senderTextColorHex = [v copy];
    } else {
        _senderTextColorHex = [@"#808080" retain];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"SenderTextColorDarkHex"]];
    if (v.length > 0) {
        [_senderTextColorDarkHex release];
        _senderTextColorDarkHex = [v copy];
    } else {
        _senderTextColorDarkHex = [@"#BFBFBF" retain];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"SenderBackgroundColorHex"]];
    if (v.length > 0) {
        [_senderBackgroundColorHex release];
        _senderBackgroundColorHex = [v copy];
    } else {
        _senderBackgroundColorHex = [@"#00000000" retain];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"SenderBackgroundColorDarkHex"]];
    if (v.length > 0) {
        [_senderBackgroundColorDarkHex release];
        _senderBackgroundColorDarkHex = [v copy];
    } else {
        _senderBackgroundColorDarkHex = [@"#00000000" retain];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ReceiverTextColorHex"]];
    if (v.length > 0) {
        [_receiverTextColorHex release];
        _receiverTextColorHex = [v copy];
    } else {
        _receiverTextColorHex = [@"#808080" retain];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ReceiverTextColorDarkHex"]];
    if (v.length > 0) {
        [_receiverTextColorDarkHex release];
        _receiverTextColorDarkHex = [v copy];
    } else {
        _receiverTextColorDarkHex = [@"#BFBFBF" retain];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ReceiverBackgroundColorHex"]];
    if (v.length > 0) {
        [_receiverBackgroundColorHex release];
        _receiverBackgroundColorHex = [v copy];
    } else {
        _receiverBackgroundColorHex = [@"#00000000" retain];
    }
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"ReceiverBackgroundColorDarkHex"]];
    if (v.length > 0) {
        [_receiverBackgroundColorDarkHex release];
        _receiverBackgroundColorDarkHex = [v copy];
    } else {
        _receiverBackgroundColorDarkHex = [@"#00000000" retain];
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
    
    _showAddTimeSuffix = [d boolForKey:[kPluginPrefix stringByAppendingString:@"ShowAddTimeSuffix"]];
    
    v = [d stringForKey:[kPluginPrefix stringByAppendingString:@"AddTimeSuffixFormat"]];
    if (v.length > 0) {
        [_addTimeSuffixFormat release];
        _addTimeSuffixFormat = [v copy];
    } else {
        _addTimeSuffixFormat = [@"(yyyy-MM-dd)" retain];
    }

    @try {
        NSData *data = [d dataForKey:[kPluginPrefix stringByAppendingString:@"SessionFormats"]];
        if (data) {
            id obj = [NSKeyedUnarchiver unarchiveObjectWithData:data];
            if ([obj isKindOfClass:[NSMutableDictionary class]]) {
                [_sessionFormats release];
                _sessionFormats = [obj retain];
            }
        }
        data = [d dataForKey:[kPluginPrefix stringByAppendingString:@"UserFormats"]];
        if (data) {
            id obj = [NSKeyedUnarchiver unarchiveObjectWithData:data];
            if ([obj isKindOfClass:[NSMutableDictionary class]]) {
                [_userFormats release];
                _userFormats = [obj retain];
            }
        }
    } @catch (NSException *e) {}
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
    [d setBool:_showAddTimeSuffix forKey:[kPluginPrefix stringByAppendingString:@"ShowAddTimeSuffix"]];
    if (_addTimeSuffixFormat) {
        [d setObject:_addTimeSuffixFormat forKey:[kPluginPrefix stringByAppendingString:@"AddTimeSuffixFormat"]];
    }

    @try {
        [d setObject:[NSKeyedArchiver archivedDataWithRootObject:_sessionFormats] forKey:[kPluginPrefix stringByAppendingString:@"SessionFormats"]];
        [d setObject:[NSKeyedArchiver archivedDataWithRootObject:_userFormats] forKey:[kPluginPrefix stringByAppendingString:@"UserFormats"]];
    } @catch (NSException *e) {}

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
    
    // 清理界面简化/附件布局的非前缀 key（这些 key 没有 WCP_ 前缀）
    [d removeObjectForKey:@"SimplifyEnabled"];
    [d removeObjectForKey:@"Simplify_MenuNames"];
    [d removeObjectForKey:@"Simplify_Tab_Names"];
    [d removeObjectForKey:@"Simplify_MainTitle"];
    [d removeObjectForKey:@"Simplify_ContactsTitle"];
    [d removeObjectForKey:@"Simplify_DiscoverTitle"];
    [d removeObjectForKey:@"Simplify_FriendsCount"];
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
    NSString *result = [[tmpl copy] autorelease];
    
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
