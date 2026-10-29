@interface WCMomentsDetailActionItem : NSObject
{
    long long _actionType; // +0x8
    id /* block */ _getActionTitleBlock; // +0x10
    id /* block */ _getActionTipsBlock; // +0x18
    id /* block */ _displayBlock; // +0x20
    id /* block */ _actionBlock; // +0x28
}
- (id)initWithActionType:(long long)arg1;
- (id)getActionTitle;
- (id)getActionTips;
- (void)didDisplayActionItem;
- (void)didClickActionItem;
- (long long)actionType;
- (id /* block */)getActionTitleBlock;
- (void)setGetActionTitleBlock:(id /* block */)arg1;
- (id /* block */)getActionTipsBlock;
- (void)setGetActionTipsBlock:(id /* block */)arg1;
- (id /* block */)displayBlock;
- (void)setDisplayBlock:(id /* block */)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

