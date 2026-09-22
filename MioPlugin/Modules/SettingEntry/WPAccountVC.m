// 账户信息页 - 用户信息/应用信息/签名证书/到期提醒
// 功能参考逆向 WCRefine 2.1-2「账户信息」页 (AccountDetailViewController)
// 渲染：全微信引擎（基类 WPWGroup 行方法；信息行=NavCell 右值，点击复制）

#import "WPAccountVC.h"
#import "WPCommonUI.h"
#import "../AccountDetail/AccountConfig.h"
#import "../../Core/LogManager.h"
#import "../../Core/MioAlertHelper.h"
#import <objc/runtime.h>
#import <objc/message.h>
#import <sys/sysctl.h>
#import <stdlib.h>

#pragma mark - C 辅助函数（定义在使用点之前）

/// 获取当前登录账号 CContact（MMServiceCenter getService: → getSelfContact）
static id MioGetSelfContact(void) {
    id center = [objc_getClass("MMServiceCenter") performSelector:NSSelectorFromString(@"defaultCenter")];
    if (!center) return nil;
    // 兼容不同微信版本：CContactMgr / CContactStorage 均暴露 getSelfContact
    for (NSString *svcName in @[@"CContactMgr", @"CContactStorage"]) {
        Class svc = objc_getClass(svcName.UTF8String);
        if (!svc) continue;
        id svcObj = ((id (*)(id, SEL, Class))objc_msgSend)(center, NSSelectorFromString(@"getService:"), svc);
        SEL sel = NSSelectorFromString(@"getSelfContact");
        if (svcObj && [svcObj respondsToSelector:sel]) {
            id contact = ((id (*)(id, SEL))objc_msgSend)(svcObj, sel);
            if (contact) return contact;
        }
    }
    return nil;
}

/// 从 CContact 取字符串属性（方法或属性 getter 通用），空串返回 nil
static NSString *MioContactString(id contact, const char *selName) {
    if (!contact) return nil;
    SEL sel = NSSelectorFromString(@(selName));
    if (![contact respondsToSelector:sel]) return nil;
    id v = ((id (*)(id, SEL))objc_msgSend)(contact, sel);
    if ([v isKindOfClass:[NSString class]] && [(NSString *)v length] > 0) return v;
    return nil;
}

/// 机型友好名：sysctl hw.machine → 静态映射表（未命中回退原始值）
static NSString *MioDeviceModelName(void) {
    size_t size = 0;
    sysctlbyname("hw.machine", NULL, &size, NULL, 0);
    if (size == 0) return @"未知";
    char *buf = malloc(size);
    if (!buf) return @"未知";
    sysctlbyname("hw.machine", buf, &size, NULL, 0);
    NSString *machine = [NSString stringWithCString:buf encoding:NSUTF8StringEncoding];
    free(buf);
    if (machine.length == 0) return @"未知";

    static NSDictionary<NSString *, NSString *> *map = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        map = @{
            @"i386": @"模拟器", @"x86_64": @"模拟器", @"arm64": @"模拟器",
            @"iPhone5,1": @"iPhone 5", @"iPhone5,2": @"iPhone 5",
            @"iPhone5,3": @"iPhone 5c", @"iPhone5,4": @"iPhone 5c",
            @"iPhone6,1": @"iPhone 5s", @"iPhone6,2": @"iPhone 5s",
            @"iPhone7,1": @"iPhone 6 Plus", @"iPhone7,2": @"iPhone 6",
            @"iPhone8,1": @"iPhone 6s", @"iPhone8,2": @"iPhone 6s Plus", @"iPhone8,4": @"iPhone SE",
            @"iPhone9,1": @"iPhone 7", @"iPhone9,3": @"iPhone 7",
            @"iPhone9,2": @"iPhone 7 Plus", @"iPhone9,4": @"iPhone 7 Plus",
            @"iPhone10,1": @"iPhone 8", @"iPhone10,4": @"iPhone 8",
            @"iPhone10,2": @"iPhone 8 Plus", @"iPhone10,5": @"iPhone 8 Plus",
            @"iPhone10,3": @"iPhone X", @"iPhone10,6": @"iPhone X",
            @"iPhone11,2": @"iPhone XS", @"iPhone11,4": @"iPhone XS Max", @"iPhone11,6": @"iPhone XS Max",
            @"iPhone11,8": @"iPhone XR",
            @"iPhone12,1": @"iPhone 11", @"iPhone12,3": @"iPhone 11 Pro", @"iPhone12,5": @"iPhone 11 Pro Max",
            @"iPhone12,8": @"iPhone SE (2nd)",
            @"iPhone13,1": @"iPhone 12 mini", @"iPhone13,2": @"iPhone 12",
            @"iPhone13,3": @"iPhone 12 Pro", @"iPhone13,4": @"iPhone 12 Pro Max",
            @"iPhone14,4": @"iPhone 13 mini", @"iPhone14,5": @"iPhone 13",
            @"iPhone14,2": @"iPhone 13 Pro", @"iPhone14,3": @"iPhone 13 Pro Max",
            @"iPhone14,6": @"iPhone SE (3rd)",
            @"iPhone14,7": @"iPhone 14", @"iPhone14,8": @"iPhone 14 Plus",
            @"iPhone15,2": @"iPhone 14 Pro", @"iPhone15,3": @"iPhone 14 Pro Max",
            @"iPhone15,4": @"iPhone 15", @"iPhone15,5": @"iPhone 15 Plus",
            @"iPhone16,1": @"iPhone 15 Pro", @"iPhone16,2": @"iPhone 15 Pro Max",
        };
    });
    return map[machine] ?: machine;
}

/// profile 日期字段格式化（兼容 NSDate 与字符串两种存储形态）
static NSString *MioFormatProfileDate(id value) {
    if ([value isKindOfClass:[NSDate class]]) {
        static NSDateFormatter *fmt = nil;
        static dispatch_once_t onceToken;
        dispatch_once(&onceToken, ^{
            fmt = [[NSDateFormatter alloc] init];
            fmt.dateFormat = @"yyyy-MM-dd HH:mm:ss";
            fmt.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"];
        });
        return [fmt stringFromDate:value];
    }
    if ([value isKindOfClass:[NSString class]]) return value;
    return value ? [value description] : @"-";
}

/// profile 通用取值（数组拼接、日期格式化、空值兜底）
static NSString *MioProfileValue(NSDictionary *profile, NSString *key) {
    id v = profile[key];
    if (!v) return @"-";
    if ([v isKindOfClass:[NSArray class]]) return [(NSArray *)v componentsJoinedByString:@", "];
    if ([v isKindOfClass:[NSDate class]]) return MioFormatProfileDate(v);
    if ([v isKindOfClass:[NSString class]]) return v;
    return [v description];
}

/// 证书类型判定：ProvisionsAllDevices → 企业；Name 含 Development → 开发；
/// 有 ProvisionedDevices → 发布（Ad Hoc/发布）；否则 App Store
static NSString *MioCertTypeName(NSDictionary *profile) {
    NSNumber *allDevices = profile[@"ProvisionsAllDevices"];
    if (allDevices.boolValue) return @"企业证书";
    NSString *name = profile[@"Name"];
    if ([name isKindOfClass:[NSString class]] && [name containsString:@"Development"]) return @"开发证书";
    NSArray *devices = profile[@"ProvisionedDevices"];
    if ([devices isKindOfClass:[NSArray class]] && devices.count > 0) return @"发布证书";
    return @"App Store";
}

/// 允许设备数：企业证书不限制；App Store 无设备列表
static NSString *MioAllowedDevicesText(NSDictionary *profile) {
    NSNumber *allDevices = profile[@"ProvisionsAllDevices"];
    if (allDevices.boolValue) return @"不限制";
    NSArray *devices = profile[@"ProvisionedDevices"];
    if ([devices isKindOfClass:[NSArray class]] && devices.count > 0) {
        return [NSString stringWithFormat:@"%lu 台设备", (unsigned long)devices.count];
    }
    return @"-";
}

/// 读取 embedded.mobileprovision：CMS(DER) 包裹的 XML plist，按 <plist / </plist> 字节边界截取解析（不验签）
static NSDictionary *MioReadProvisioningProfile(void) {
    NSString *path = [[[NSBundle mainBundle] bundlePath]
                       stringByAppendingPathComponent:@"embedded.mobileprovision"];
    if (![[NSFileManager defaultManager] fileExistsAtPath:path]) return nil;
    NSData *raw = [NSData dataWithContentsOfFile:path];
    if (raw.length == 0) return nil;

    NSData *startTag = [@"<plist" dataUsingEncoding:NSUTF8StringEncoding];
    NSData *endTag = [@"</plist>" dataUsingEncoding:NSUTF8StringEncoding];
    NSRange start = [raw rangeOfData:startTag options:0 range:NSMakeRange(0, raw.length)];
    if (start.location == NSNotFound) return nil;
    NSRange end = [raw rangeOfData:endTag options:0 range:NSMakeRange(start.location, raw.length - start.location)];
    if (end.location == NSNotFound) return nil;

    NSData *plistData = [raw subdataWithRange:NSMakeRange(start.location, end.location + end.length - start.location)];
    id plist = [NSPropertyListSerialization propertyListWithData:plistData
                                                         options:NSPropertyListImmutable
                                                          format:nil
                                                           error:nil];
    return [plist isKindOfClass:[NSDictionary class]] ? plist : nil;
}

#pragma mark - 页面

@interface WPAccountVC ()
@property (nonatomic, strong) NSDictionary *profile; // embedded.mobileprovision 解析结果
@end

@implementation WPAccountVC

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"账户信息";
    self.profile = MioReadProvisioningProfile();
    [self buildUI];
}

- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    [self checkCertExpireAlertIfNeeded];
}

#pragma mark UI 构建（全微信引擎：组 = WPWGroup，信息行 = NavCell 右值，点击信息行复制）

- (void)buildUI {
    NSDictionary *profile = self.profile;

    // ── 用户信息 ──
    [self addSectionHeader:@"用户信息" y:0 width:0];
    UIView *userGroup = [self addTableGroupAtY:0 width:0];
    CGFloat uy = 0;
    id contact = MioGetSelfContact();
    NSString *displayName = MioContactString(contact, "getContactDisplayName");
    NSString *alias = MioContactString(contact, "m_nsAliasName");
    NSString *usrName = MioContactString(contact, "m_nsUsrName");
    uy = [self addInfoRowInGroup:userGroup title:@"微信名" rightValue:displayName ?: @"-" copyText:displayName cy:uy width:0];
    if (alias.length > 0) {
        uy = [self addInfoRowInGroup:userGroup title:@"微信号" rightValue:alias copyText:alias cy:uy width:0];
    }
    uy = [self addInfoRowInGroup:userGroup title:@"WXID" rightValue:usrName ?: @"-" copyText:usrName cy:uy width:0];
    uy = [self addNavRowInGroup:userGroup title:@"账号状态" subtitle:@"微信官方检测" tag:0 action:@selector(openTencentGuardian) cy:uy width:0];
    [self addHintRowInGroup:userGroup text:@"点击信息行可复制对应内容" cy:uy width:0];
    [self finishGroup:userGroup atY:0 height:0];

    // ── 应用信息 ──
    [self addSectionHeader:@"应用信息" y:0 width:0];
    UIView *appGroup = [self addTableGroupAtY:0 width:0];
    CGFloat ay = 0;
    NSBundle *bundle = [NSBundle mainBundle];
    NSString *appName = [bundle objectForInfoDictionaryKey:@"CFBundleDisplayName"];
    if (appName.length == 0) appName = [bundle objectForInfoDictionaryKey:@"CFBundleName"];
    if (appName.length == 0) appName = @"未知";
    NSString *ver = [bundle objectForInfoDictionaryKey:@"CFBundleShortVersionString"] ?: @"";
    NSString *build = [bundle objectForInfoDictionaryKey:@"CFBundleVersion"] ?: @"";
    NSString *verText = build.length > 0 ? [NSString stringWithFormat:@"%@ (%@)", ver, build] : ver;
    NSArray<NSArray<NSString *> *> *appRows = @[
        @[@"应用名称", appName ?: @"-"],
        @[@"微信版本", verText.length > 0 ? verText : @"-"],
        @[@"微信包名", [bundle bundleIdentifier] ?: @"-"],
        @[@"系统版本", [UIDevice currentDevice].systemVersion ?: @"-"],
        @[@"设备标识", MioDeviceModelName()],
    ];
    for (NSUInteger i = 0; i < appRows.count; i++) {
        ay = [self addInfoRowInGroup:appGroup title:appRows[i][0] rightValue:appRows[i][1] copyText:nil cy:ay width:0];
    }
    [self finishGroup:appGroup atY:0 height:0];

    // ── 证书信息 ──
    if (profile) {
        [self addSectionHeader:@"证书信息" y:0 width:0];
        UIView *certGroup = [self addTableGroupAtY:0 width:0];
        CGFloat cy2 = 0;
        NSArray<NSArray<NSString *> *> *certRows = @[
            @[@"证书类型", MioCertTypeName(profile)],
            @[@"签名团队", MioProfileValue(profile, @"TeamName")],
            @[@"团队ID", MioProfileValue(profile, @"TeamIdentifier")],
            @[@"注册时间", MioProfileValue(profile, @"CreationDate")],
            @[@"过期时间", MioProfileValue(profile, @"ExpirationDate")],
            @[@"允许设备", MioAllowedDevicesText(profile)],
        ];
        for (NSUInteger i = 0; i < certRows.count; i++) {
            cy2 = [self addInfoRowInGroup:certGroup title:certRows[i][0] rightValue:certRows[i][1] copyText:nil cy:cy2 width:0];
        }
        [self finishGroup:certGroup atY:0 height:0];

        // ── 证书权限（Entitlements）──
        NSDictionary *ent = profile[@"Entitlements"];
        if ([ent isKindOfClass:[NSDictionary class]] && ent.count > 0) {
            [self addSectionHeader:@"证书权限" y:0 width:0];
            UIView *permGroup = [self addTableGroupAtY:0 width:0];
            CGFloat py = 0;
            NSArray<NSArray<NSString *> *> *permKeys = @[
                @[@"aps-environment", @"推送权限"],
                @[@"com.apple.developer.kernel.increased-memory-limit", @"内存限制"],
                @[@"com.apple.security.application-groups", @"应用组权限"],
                @[@"com.apple.developer.kernel.extended-virtual-addressing", @"扩展虚拟地址"],
                @[@"com.apple.developer.avfoundation.multitasking-camera-access", @"多任务摄像头"],
                @[@"com.apple.developer.usernotifications.communication", @"Communication权限"],
            ];
            for (NSUInteger i = 0; i < permKeys.count; i++) {
                NSString *status = [self permissionStatusTextForKey:permKeys[i][0] entitlements:ent];
                py = [self addInfoRowInGroup:permGroup title:permKeys[i][1] rightValue:status copyText:nil cy:py width:0];
            }
            [self finishGroup:permGroup atY:0 height:0];
        }
    } else {
        [self addSectionHeader:@"证书信息" y:0 width:0];
        UIView *certGroup = [self addTableGroupAtY:0 width:0];
        [self addHintRowInGroup:certGroup text:@"未读取到证书信息（无 embedded.mobileprovision）" cy:0 width:0];
        [self finishGroup:certGroup atY:0 height:0];
    }

    // ── 提示规则 ──
    [self addSectionHeader:@"提示规则" y:0 width:0];
    UIView *ruleGroup = [self addTableGroupAtY:0 width:0];
    CGFloat ry = 0;
    AccountConfig *cfg = [AccountConfig shared];
    ry = [self addSwitchRowInGroup:ruleGroup title:@"到期提示" desc:nil key:@"certExpireAlertEnabled" isOn:cfg.certExpireAlertEnabled cy:ry width:0];
    ry = [self addInputRowInGroup:ruleGroup
                            title:@"证书到期提醒"
                              key:@"certExpireAlertDays"
                            value:cfg.certExpireAlertDays ?: @"30@18@7@3"
                             hint:@"30@18@7@3"
                        valueType:InputValueTypeText
                       alertTitle:@"证书到期提醒"
                     alertMessage:@"请输入到期前需要提示的日期，多个日期用 @ 隔开\n如 30@18@7@3，到期前 30、18、7、3 天时分别提示"
                               cy:ry
                            width:0];
    [self addHintRowInGroup:ruleGroup text:@"到期前按设定天数各提示一次" cy:ry width:0];
    [self finishGroup:ruleGroup atY:0 height:0];

    WPLog(@"Setting", @"[Sub] WPAccountVC buildUI done");
}

#pragma mark 动作

/// 账号状态：跳转腾讯卫士小程序。微信"小程序口令"机制：复制链接后粘贴到聊天/搜索框即直达
- (void)openTencentGuardian {
    [UIPasteboard generalPasteboard].string = @"#小程序://腾讯卫士/NgEPUfJ9RorXGKd";
    WPShowToast(@"小程序口令已复制，粘贴到聊天或搜索框即可打开腾讯卫士");
}

#pragma mark 证书权限

/// 权限状态文案：权限正常 / 无权限 / 未检测到权限信息（对齐 WCRefine permissionStatusTextGranted:hasSource:）
- (NSString *)permissionStatusTextForKey:(NSString *)key entitlements:(NSDictionary *)ent {
    if (!ent) return @"未检测到权限信息";
    id v = ent[key];
    if (!v) return @"无权限";
    if ([key isEqualToString:@"com.apple.security.application-groups"]) {
        if ([v isKindOfClass:[NSArray class]] && [(NSArray *)v count] > 0) {
            return [NSString stringWithFormat:@"%lu个 · %@", (unsigned long)[(NSArray *)v count], [(NSArray *)v componentsJoinedByString:@", "]];
        }
        return @"无权限";
    }
    return @"权限正常";
}

#pragma mark 到期提醒

/// 打开页面时比对证书过期时间与提前天数列表（30@18@7@3），命中则弹窗提示（对齐 WCRefine 行为，仅本页生效）
- (void)checkCertExpireAlertIfNeeded {
    if (![AccountConfig shared].certExpireAlertEnabled) return;
    NSDate *expire = nil;
    id raw = self.profile[@"ExpirationDate"];
    if ([raw isKindOfClass:[NSDate class]]) expire = raw;
    if (!expire) return;

    NSInteger days = (NSInteger)ceil([expire timeIntervalSinceNow] / 86400.0);
    NSString *marks = [AccountConfig shared].certExpireAlertDays;
    for (NSString *part in [marks componentsSeparatedByString:@"@"]) {
        NSInteger d = part.integerValue;
        if (d > 0 && d == days) {
            NSString *dateStr = MioFormatProfileDate(expire);
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.8 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                [MioAlertHelper showTipAlert:[NSString stringWithFormat:@"签名证书将在 %ld 天后过期\n(%@)", (long)days, dateStr] buttonTitle:@"知道了"];
            });
            break;
        }
    }
}

@end
