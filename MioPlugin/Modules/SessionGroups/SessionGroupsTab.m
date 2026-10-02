#import "SessionGroupsTab.h"

@implementation SessionGroupsTab

+ (NSArray<SessionGroupsTab *> *)defaultTabs {
    // WCR defaultTabs 实证：Misc_part6.c:3897-3917
    // tabId 为反编译实锤 ASCII 串；title 在反编译里是中文 CFString（内容未导出），取对应中文名
    SessionGroupsTab *all = [[SessionGroupsTab alloc] init];
    all.tabId = @"all";       all.title = @"全部";   all.kind = 0; all.scopeMask = 0;

    SessionGroupsTab *priv = [[SessionGroupsTab alloc] init];
    priv.tabId = @"private";  priv.title = @"私聊";  priv.kind = 1; priv.scopeMask = 1;

    SessionGroupsTab *room = [[SessionGroupsTab alloc] init];
    room.tabId = @"chatroom"; room.title = @"群聊";  room.kind = 1; room.scopeMask = 2;

    SessionGroupsTab *other = [[SessionGroupsTab alloc] init];
    other.tabId = @"other";   other.title = @"其他"; other.kind = 1; other.scopeMask = 0x18;

    return @[all, priv, room, other];
}

@end
