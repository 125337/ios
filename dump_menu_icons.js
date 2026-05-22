/**
 * 脚本: dump_menu_icons.js
 * 用途: 抓取微信 MMMenuItem 所有的图标名
 * 用法: frida -U -n WeChat -l dump_menu_icons.js
 *
 * 然后在微信里把能长按的菜单都点一遍
 * （文本消息、图片、链接、转账、文件、语音、视频...）
 */

// 方法1: Hook MMMenuItem 的 initWithTitle:iconName:actionName:
var MMMenuItem = ObjC.classes.MMMenuItem;
if (MMMenuItem) {
    var initMethods = ObjC.classes.MMMenuItem.$ownMethods.filter(function(m) {
        return m.indexOf('initWithTitle:iconName:') !== -1;
    });
    console.log('[MMMenuItem init methods]:', JSON.stringify(initMethods));

    initMethods.forEach(function(methodName) {
        var interceptor = ObjC.classes.MMMenuItem[methodName];
        if (interceptor && interceptor.implementation) {
            Interceptor.attach(interceptor.implementation, {
                onEnter: function(args) {
                    try {
                        var title = new ObjC.Object(args[2]).toString();
                        var icon = new ObjC.Object(args[3]).toString();
                        console.log('[MMMenuItem] title="' + title + '" icon="' + icon + '"');
                    } catch(e) {
                        console.log('[MMMenuItem raw] args:', args[2], args[3], args[4]);
                    }
                }
            });
            console.log('[+] Hooked:', methodName);
        }
    });
} else {
    console.log('[-] MMMenuItem class not found');
}

// 方法2: 直接遍历类的方法，打印所有 initWithTitle... 相关的方法
var methods = [];
try {
    ObjC.classes.MMMenuItem.$ownMethods.forEach(function(m) { methods.push(m); });
    console.log('[MMMenuItem all own methods]:', JSON.stringify(methods));
} catch(e) {
    console.log('[-] Cannot enumerate MMMenuItem methods:', e.message);
}

// 方法3: Hook operationMenuItems 的返回值，看已创建的菜单项有哪些图标
var opMenuClasses = ['TextMessageCellView', 'WCPayTransferMessageCellView', 'BaseMessageCellView'];
opMenuClasses.forEach(function(className) {
    var cls = ObjC.classes[className];
    if (cls && cls['- operationMenuItems']) {
        var origImpl = cls['- operationMenuItems'].implementation;
        Interceptor.attach(origImpl, {
            onLeave: function(retval) {
                var items = new ObjC.Object(retval);
                var count = items.count().valueOf();
                for (var i = 0; i < count; i++) {
                    var item = items.objectAtIndex_(i);
                    var title = item.title ? item.title().toString() : '?';
                    var icon = item.iconName ? item.iconName().toString() : '?';
                    console.log('[' + className + ' menuItem #' + i + '] title="' + title + '" iconName="' + icon + '"');
                }
            }
        });
        console.log('[+] Hooked operationMenuItems of', className);
    }
});

console.log('[dump_menu_icons] Ready. Now trigger menus in WeChat...');