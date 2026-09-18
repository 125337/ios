#import "WPAccountVC.h"
#import "WPCommonUI.h"
#import "../AccountDetail/AccountConfig.h"
#import "../../Core/LogManager.h"
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

/// 轻量 toast 已提取为 WPCommonUI 的 WPShowToast（全局唯一实现）

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

#pragma mark UI 构建

- (void)buildUI {
    for (UIView *v in self.contentView.subviews) {
        [v removeFromSuperview];
    }

    CGFloat w = self.view.bounds.size.width;
    CGFloat y = 8;
    NSDictionary *profile = self.profile;

    // ── 用户信息 ──
    y = [self addSectionHeader:@"用户信息" y:y width:w];
    // 信息行为手工构建，不能用基类 addTableGroupAtY:（返回 UITableView，数据驱动，未注册行会被裁剪），
    // 用 WPCommonUI 的白卡片工厂 WPMakeCard
    UIView *userGroup = WPMakeCard(y, w);
    [self.contentView addSubview:userGroup];
    CGFloat uy = 0;
    id contact = MioGetSelfContact();
    NSString *displayName = MioContactString(contact, "getContactDisplayName");
    NSString *alias = MioContactString(contact, "m_nsAliasName");
    NSString *usrName = MioContactString(contact, "m_nsUsrName");
    uy = [self addInfoRow:userGroup title:@"微信名" value:displayName ?: @"-" cy:uy width:w copyTitle:@"微信名"];
    uy = [self addSeparatorInGroup:userGroup cy:uy width:w];
    if (alias.length > 0) {
        uy = [self addInfoRow:userGroup title:@"微信号" value:alias cy:uy width:w copyTitle:@"微信号"];
        uy = [self addSeparatorInGroup:userGroup cy:uy width:w];
    }
    uy = [self addInfoRow:userGroup title:@"WXID" value:usrName ?: @"-" cy:uy width:w copyTitle:@"WXID"];
    uy = [self addSeparatorInGroup:userGroup cy:uy width:w];
    uy = [self addArrowRow:userGroup title:@"账号状态" value:@"腾讯卫士查看" cy:uy width:w action:@selector(openTencentGuardian)];
    y = [self finishGroup:userGroup atY:y height:uy];

    // ── 应用信息 ──
    y = [self addSectionHeader:@"应用信息" y:y width:w];
    UIView *appGroup = WPMakeCard(y, w);
    [self.contentView addSubview:appGroup];
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
        if (i > 0) ay = [self addSeparatorInGroup:appGroup cy:ay width:w];
        ay = [self addInfoRow:appGroup title:appRows[i][0] value:appRows[i][1] cy:ay width:w copyTitle:nil];
    }
    y = [self finishGroup:appGroup atY:y height:ay];

    // ── 证书信息 ──
    y = [self addSectionHeader:@"证书信息" y:y width:w];
    if (profile) {
        UIView *certGroup = WPMakeCard(y, w);
        [self.contentView addSubview:certGroup];
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
            if (i > 0) cy2 = [self addSeparatorInGroup:certGroup cy:cy2 width:w];
            cy2 = [self addInfoRow:certGroup title:certRows[i][0] value:certRows[i][1] cy:cy2 width:w copyTitle:nil];
        }
        y = [self finishGroup:certGroup atY:y height:cy2];

        // ── 证书权限（Entitlements）──
        NSDictionary *ent = profile[@"Entitlements"];
        if ([ent isKindOfClass:[NSDictionary class]] && ent.count > 0) {
            y = [self addSectionHeader:@"证书权限" y:y width:w];
            UIView *permGroup = WPMakeCard(y, w);
            [self.contentView addSubview:permGroup];
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
                if (i > 0) py = [self addSeparatorInGroup:permGroup cy:py width:w];
                NSString *status = [self permissionStatusTextForKey:permKeys[i][0] entitlements:ent];
                py = [self addInfoRow:permGroup title:permKeys[i][1] value:status cy:py width:w copyTitle:nil];
            }
            y = [self finishGroup:permGroup atY:y height:py];
        }
    } else {
        UIView *certGroup = WPMakeCard(y, w);
        [self.contentView addSubview:certGroup];
        CGFloat cy2 = [self addHintRowInGroup:certGroup text:@"未读取到证书信息（无 embedded.mobileprovision）" cy:0 width:w];
        y = [self finishGroup:certGroup atY:y height:cy2];
    }

    // ── 提示规则 ──
    y = [self addSectionHeader:@"提示规则" y:y width:w];
    UIView *ruleGroup = [self addTableGroupAtY:y width:w];
    CGFloat ry = 0;
    AccountConfig *cfg = [AccountConfig shared];
    ry = [self addSwitchRowInGroup:ruleGroup title:@"到期提示" desc:@"打开本页时检查证书有效期" key:@"certExpireAlertEnabled" isOn:cfg.certExpireAlertEnabled cy:ry width:w];
    ry = [self addSeparatorInGroup:ruleGroup cy:ry width:w];
    ry = [self addInputRowInGroup:ruleGroup
                            title:@"证书到期提醒"
                              key:@"certExpireAlertDays"
                            value:cfg.certExpireAlertDays ?: @"30@18@7@3"
                             hint:@"30@18@7@3"
                        valueType:InputValueTypeText
                       alertTitle:@"证书到期提醒"
                     alertMessage:@"请输入到期前需要提示的日期，多个日期用 @ 隔开\n如 30@18@7@3，到期前 30、18、7、3 天时分别提示"
                               cy:ry
                            width:w];
    y = [self finishGroup:ruleGroup atY:y height:ry];

    self.contentView.frame = CGRectMake(0, 0, w, y + 40);
    self.scrollView.contentSize = CGSizeMake(w, y + 40);
    WPLog(@"Setting", @"[Sub] WPAccountVC buildUI done");
}

#pragma mark 行构建

/// 信息行：左标题 + 右值；copyTitle 非空时整行可点击复制
- (CGFloat)addInfoRow:(UIView *)group title:(NSString *)title value:(NSString *)value cy:(CGFloat)cy width:(CGFloat)w copyTitle:(NSString *)copyTitle {
    return [self addInfoRow:group title:title value:value cy:cy width:w copyTitle:copyTitle rightInset:0];
}

/// 带右侧内缩版本（箭头行用，rightInset 为箭头预留空间）
- (CGFloat)addInfoRow:(UIView *)group title:(NSString *)title value:(NSString *)value cy:(CGFloat)cy width:(CGFloat)w copyTitle:(NSString *)copyTitle rightInset:(CGFloat)rightInset {
    CGFloat gw = w - kPad * 2;
    CGFloat valueX = kPad + 110;
    CGFloat valueW = gw - kPad - rightInset - valueX;

    UILabel *tl = [[UILabel alloc] initWithFrame:CGRectMake(kPad, cy, 110, kRowH)];
    tl.text = title;
    tl.font = [UIFont systemFontOfSize:15];
    tl.textColor = WPT1();
    tl.adjustsFontSizeToFitWidth = YES;
    tl.minimumScaleFactor = 0.7;
    [group addSubview:tl];

    UILabel *vl = [[UILabel alloc] initWithFrame:CGRectMake(valueX, cy, valueW, kRowH)];
    vl.text = value ?: @"-";
    vl.font = [UIFont systemFontOfSize:13];
    vl.textColor = WPT2();
    vl.textAlignment = NSTextAlignmentRight;
    vl.numberOfLines = 1;
    vl.adjustsFontSizeToFitWidth = YES;
    vl.minimumScaleFactor = 0.6;
    [group addSubview:vl];

    if (copyTitle.length > 0) {
        UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
        btn.frame = CGRectMake(0, cy, gw, kRowH);
        objc_setAssociatedObject(btn, "copyText", value ?: @"", OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        objc_setAssociatedObject(btn, "copyTitle", copyTitle, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
        [btn addTarget:self action:@selector(copyRowTapped:) forControlEvents:UIControlEventTouchUpInside];
        [group addSubview:btn];
    }
    return cy + kRowH;
}

/// 箭头行：左标题 + 右值 + ">" + 整行点击
- (CGFloat)addArrowRow:(UIView *)group title:(NSString *)title value:(NSString *)value cy:(CGFloat)cy width:(CGFloat)w action:(SEL)action {
    CGFloat cy2 = [self addInfoRow:group title:title value:value cy:cy width:w copyTitle:nil rightInset:20];
    WPDrawDisclosureArrow(group, cy, w - kPad * 2, kPad);
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    btn.frame = CGRectMake(0, cy, w - kPad * 2, kRowH);
    [btn addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    [group addSubview:btn];
    return cy2;
}

- (void)copyRowTapped:(UIButton *)sender {
    NSString *text = objc_getAssociatedObject(sender, "copyText");
    NSString *title = objc_getAssociatedObject(sender, "copyTitle");
    if (text.length == 0) return;
    [UIPasteboard generalPasteboard].string = text;
    WPShowToast([NSString stringWithFormat:@"已复制%@: %@", title ?: @"", text]);
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
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:@"证书到期提醒"
                                                                           message:[NSString stringWithFormat:@"签名证书将在 %ld 天后过期\n(%@)", (long)days, dateStr]
                                                                    preferredStyle:UIAlertControllerStyleAlert];
            [alert addAction:[UIAlertAction actionWithTitle:@"知道了" style:UIAlertActionStyleDefault handler:nil]];
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(0.8 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                UIViewController *top = WPGetTopVCForPresentation();
                if (top && !top.presentedViewController) {
                    [top presentViewController:alert animated:YES completion:nil];
                }
            });
            break;
        }
    }
}

@end
