#!/bin/bash

set -e

RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m'

echo -e "${GREEN}========================================${NC}"
echo -e "${GREEN}    微信插件注入工具${NC}"
echo -e "${GREEN}========================================${NC}"

if [ $# -lt 2 ]; then
    echo -e "${YELLOW}用法:${NC}"
    echo "  $0 <IPA路径> <dylib路径> [输出目录]"
    echo ""
    echo -e "${YELLOW}示例:${NC}"
    echo "  $0 WeChat.ipa Mio_arm64.dylib ./output"
    exit 1
fi

IPA_PATH="$1"
DYLIB_PATH="$2"
OUTPUT_DIR="${3:-./output}"
TEMP_DIR="./temp_$$"

if [ ! -f "$IPA_PATH" ]; then
    echo -e "${RED}错误: IPA文件不存在: $IPA_PATH${NC}"
    exit 1
fi

if [ ! -f "$DYLIB_PATH" ]; then
    echo -e "${RED}错误: dylib文件不存在: $DYLIB_PATH${NC}"
    exit 1
fi

DYLIB_NAME=$(basename "$DYLIB_PATH")

echo -e "${YELLOW}[1/6] 创建工作目录...${NC}"
rm -rf "$TEMP_DIR"
mkdir -p "$TEMP_DIR"
mkdir -p "$OUTPUT_DIR"

echo -e "${YELLOW}[2/6] 解压IPA...${NC}"
unzip -q "$IPA_PATH" -d "$TEMP_DIR"

PAYLOAD_DIR="$TEMP_DIR/Payload"
if [ ! -d "$PAYLOAD_DIR" ]; then
    echo -e "${RED}错误: 无效的IPA文件${NC}"
    rm -rf "$TEMP_DIR"
    exit 1
fi

APP_PATH=$(find "$PAYLOAD_DIR" -name "*.app" -type d | head -1)
if [ -z "$APP_PATH" ]; then
    echo -e "${RED}错误: 未找到.app目录${NC}"
    rm -rf "$TEMP_DIR"
    exit 1
fi

APP_NAME=$(basename "$APP_PATH" .app)
BINARY_PATH="$APP_PATH/$APP_NAME"

echo -e "${YELLOW}[3/6] 注入dylib到应用...${NC}"
cp "$DYLIB_PATH" "$APP_PATH/Frameworks/" 2>/dev/null || {
    mkdir -p "$APP_PATH/Frameworks"
    cp "$DYLIB_PATH" "$APP_PATH/Frameworks/"
}

FRAMEWORKS_PATH="@executable_path/Frameworks/$DYLIB_NAME"

echo -e "${YELLOW}[4/6] 修改Mach-O头...${NC}"
if command -v insert_dylib &> /dev/null; then
    insert_dylib --all-yes --inplace "$FRAMEWORKS_PATH" "$BINARY_PATH"
elif command -v optool &> /dev/null; then
    optool install -c load -p "$FRAMEWORKS_PATH" -t "$BINARY_PATH"
else
    echo -e "${YELLOW}警告: 未找到insert_dylib或optool，尝试使用insert_dylib.py${NC}"
    if [ -f "./insert_dylib.py" ]; then
        python3 ./insert_dylib.py "$BINARY_PATH" "$FRAMEWORKS_PATH"
    else
        echo -e "${RED}错误: 没有可用的注入工具${NC}"
        echo "请安装 insert_dylib 或 optool"
        rm -rf "$TEMP_DIR"
        exit 1
    fi
fi

echo -e "${YELLOW}[5/6] 重打包IPA...${NC}"
OUTPUT_IPA="$OUTPUT_DIR/${APP_NAME}_injected.ipa"
cd "$TEMP_DIR"
zip -qr "../$OUTPUT_IPA" Payload
cd - > /dev/null

echo -e "${YELLOW}[6/6] 清理临时文件...${NC}"
rm -rf "$TEMP_DIR"

echo -e "${GREEN}========================================${NC}"
echo -e "${GREEN}注入完成!${NC}"
echo -e "${GREEN}========================================${NC}"
echo -e "输出文件: ${GREEN}$OUTPUT_IPA${NC}"
echo ""
echo -e "${YELLOW}下一步: 使用签名工具对IPA进行签名${NC}"
echo "  1. 使用 AltStore/Sideloadly 安装"
echo "  2. 或使用 codesign 重签名:"
echo "     codesign -f -s 'Your Certificate' --entitlements entitlements.plist <app_path>"
