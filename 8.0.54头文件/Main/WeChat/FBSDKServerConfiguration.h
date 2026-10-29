@interface FBSDKServerConfiguration : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSDictionary * _dialogConfigurations; // +0x8
    NSDictionary * _dialogFlows; // +0x10
    long long _version; // +0x18
    BOOL _advertisingIDEnabled; // +0x20
    BOOL _defaults; // +0x21
    BOOL _implicitLoggingEnabled; // +0x22
    BOOL _implicitPurchaseLoggingEnabled; // +0x23
    BOOL _codelessEventsEnabled; // +0x24
    BOOL _loginTooltipEnabled; // +0x25
    BOOL _nativeAuthFlowEnabled; // +0x26
    BOOL _systemAuthenticationEnabled; // +0x27
    BOOL _uninstallTrackingEnabled; // +0x28
    NSString * _appID; // +0x30
    NSString * _appName; // +0x38
    NSString * _defaultShareMode; // +0x40
    FBSDKErrorConfiguration * _errorConfiguration; // +0x48
    NSString * _loginTooltipText; // +0x50
    NSDate * _timestamp; // +0x58
    double _sessionTimoutInterval; // +0x60
    NSString * _loggingToken; // +0x68
    unsigned long long _smartLoginOptions; // +0x70
    NSURL * _smartLoginBookmarkIconURL; // +0x78
    NSURL * _smartLoginMenuIconURL; // +0x80
    NSString * _updateMessage; // +0x88
    NSArray * _eventBindings; // +0x90
}
+ (BOOL)supportsSecureCoding;
- (id)initWithAppID:(id)arg1 appName:(id)arg2 loginTooltipEnabled:(BOOL)arg3 loginTooltipText:(id)arg4 defaultShareMode:(id)arg5 advertisingIDEnabled:(BOOL)arg6 implicitLoggingEnabled:(BOOL)arg7 implicitPurchaseLoggingEnabled:(BOOL)arg8 codelessEventsEnabled:(BOOL)arg9 systemAuthenticationEnabled:(BOOL)arg10 nativeAuthFlowEnabled:(BOOL)arg11 uninstallTrackingEnabled:(BOOL)arg12 dialogConfigurations:(id)arg13 dialogFlows:(id)arg14 timestamp:(id)arg15 errorConfiguration:(id)arg16 sessionTimeoutInterval:(double)arg17 defaults:(BOOL)arg18 loggingToken:(id)arg19 smartLoginOptions:(unsigned long long)arg20 smartLoginBookmarkIconURL:(id)arg21 smartLoginMenuIconURL:(id)arg22 updateMessage:(id)arg23 eventBindings:(id)arg24;
- (id)dialogConfigurationForDialogName:(id)arg1;
- (BOOL)useNativeDialogForDialogName:(id)arg1;
- (BOOL)useSafariViewControllerForDialogName:(id)arg1;
- (BOOL)_useFeatureWithKey:(id)arg1 dialogName:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isAdvertisingIDEnabled;
- (id)appID;
- (id)appName;
- (BOOL)isDefaults;
- (id)defaultShareMode;
- (id)errorConfiguration;
- (BOOL)isImplicitLoggingSupported;
- (BOOL)isImplicitPurchaseLoggingSupported;
- (BOOL)isCodelessEventsEnabled;
- (BOOL)isLoginTooltipEnabled;
- (BOOL)isNativeAuthFlowEnabled;
- (BOOL)isSystemAuthenticationEnabled;
- (BOOL)isUninstallTrackingEnabled;
- (id)loginTooltipText;
- (id)timestamp;
- (double)sessionTimoutInterval;
- (void)setSessionTimoutInterval:(double)arg1;
- (id)loggingToken;
- (unsigned long long)smartLoginOptions;
- (id)smartLoginBookmarkIconURL;
- (id)smartLoginMenuIconURL;
- (id)updateMessage;
- (id)eventBindings;
- (long long)version;
- (void).cxx_destruct;
@end

