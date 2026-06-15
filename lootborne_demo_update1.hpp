// ============================================================
// Image: Assembly-CSharp.dll
// ============================================================

// Namespace: <global>
class GameLog
{
public:

    // Methods
    static void Log(Il2CppObject* message);  // RVA: 0x4B6150
    static void Log(Il2CppObject* message, Il2CppObject* context);  // RVA: 0x4B60F0
};

// Namespace: <global>
class SpriteCollection : public ScriptableObject
{
public:
    uint8_t pad_0000[0x18]; // 0x0000
    Sprite[][] sprites; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4B6220
};

// Namespace: <global>
struct MonoScriptData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Byte[][] FilePathsData; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Byte[][] TypesData; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t TotalTypes; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    int32_t TotalFiles; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool IsEditorOnly; // 0x0028
};

// Namespace: <global>
class UnitySourceGeneratedAssemblyMonoScriptTypes_v1
{
public:

    // Methods
    static MonoScriptData Get();  // RVA: 0x4BC620
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
struct Side
{
public:
    // Static fields
    // static Side Right;
    // static Side Left;
    // static Side Above;
    // static Side Below;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ActionButtonTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* tooltipText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Func<System.String> textProvider; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* runtimePanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool usingScenePanel; // 0x0038
        bool isHovering; // 0x0039
        uint8_t pad_003A[0x6]; // 0x003A
        Il2CppString* lastShownText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Side side; // 0x0048
    
        // Methods
        void SetTooltipText(Il2CppString* text);  // RVA: 0x4A7D40
        void SetTooltipTextProvider(System.Func<System.String> provider);  // RVA: 0x4A7D30
        void SetSide(Side s);  // RVA: 0x4A7D20
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4A7AC0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4A7A90
        void OnDisable();  // RVA: 0x4A7A90
        void Update();  // RVA: 0x4A7D70
        void HideTooltip();  // RVA: 0x4A7940
        GameObject* CreateRuntimePanel(Il2CppString* textContent);  // RVA: 0x4A7220
        void .ctor();  // RVA: 0x4A7F40
    };

    // Namespace: AutoBattle.UI
    class ActionTooltipPanel : public MonoBehaviour
    {
    public:
        // Static fields
        // static ActionTooltipPanel* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* panelRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* tooltipText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float padding; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float gap; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float maxWidth; // 0x0038
    
        // Methods
        static ActionTooltipPanel* get_Instance();  // RVA: 0x4A8E10
        static void set_Instance(ActionTooltipPanel* value);  // RVA: 0x4A8E50
        void Awake();  // RVA: 0x4A7F90
        void OnDestroy();  // RVA: 0x4A8210
        void Show(Il2CppString* text, RectTransform* anchorRect, Side side);  // RVA: 0x4A8940
        static void PositionPanel(RectTransform* panelRect, RectTransform* anchorRect, RectTransform* canvasRT, Side side, float panelWidth, float panelHeight, float gapPx);  // RVA: 0x4A82E0
        void Hide();  // RVA: 0x4A81E0
        static Canvas* GetRootCanvas(Component* c);  // RVA: 0x4A8080
        void .ctor();  // RVA: 0x4A8DF0
    };

    // Namespace: AutoBattle.UI
    class AnimatedHPBar : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float fps; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* fillImage; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* ghostImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float ghostLingerDuration; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float ghostFadeDuration; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Color ghostLightColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        float currentFill; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t frameIndex; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float frameTimer; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool ghostFading; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float ghostElapsed; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        Color ghostStartColor; // 0x006C
        uint8_t pad_006D[0xF]; // 0x006D
        Color ghostEndColor; // 0x007C
    
        // Methods
        void Awake();  // RVA: 0x4A8F80
        void OnEnable();  // RVA: 0x4A9010
        void Update();  // RVA: 0x4A9410
        void UpdateFill(float newFill);  // RVA: 0x4A92B0
        void SetFillImmediate(float newFill);  // RVA: 0x4A9120
        void TriggerGhost(float oldFill);  // RVA: 0x4A9210
        static void ApplyFill(Image* img, float value);  // RVA: 0x4A8EB0
        void .ctor();  // RVA: 0x4A96C0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <PlayLoop>d__10
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AnimatedIconHover* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B9500
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9650
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class AnimatedIconHover : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float fps; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* staticSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Coroutine* animCoroutine; // 0x0040
    
        // Methods
        void Awake();  // RVA: 0x4A96F0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4A97E0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4A97D0
        void OnDisable();  // RVA: 0x4A97D0
        void StopAndReset();  // RVA: 0x4A9950
        IEnumerator* PlayLoop();  // RVA: 0x4A98E0
        void .ctor();  // RVA: 0x4A9A00
    };

    // Namespace: AutoBattle.UI
    class ArenaBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* cieloSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* livello1Sprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* lunaSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] starsFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float starsFrameRate; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t starsTrailingFramesToSkip; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        Vector2 moonStart; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 moonEnd; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float moonSpeed; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        bool moonPingPong; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        RectTransform* cieloLayer; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        RectTransform* starsLayer; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        RectTransform* lunaLayer; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        RectTransform* livello1Layer; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        RectTransform* rect; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Image* starsImage; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        int32_t starsFrameIdx; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float starsFrameTimer; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        Image* lunaImage; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float moonT; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        int32_t moonDir; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool built; // 0x00A8
    
        // Methods
        void Awake();  // RVA: 0x4A9A10
        void OnEnable();  // RVA: 0x4AA150
        void Build();  // RVA: 0x4A9A70
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size);  // RVA: 0x4A9F00
        void Update();  // RVA: 0x4AA2E0
        void SetSprites(Sprite* cielo, Sprite[][] stars, Sprite* luna, Sprite* livello1);  // RVA: 0x4AA270
        void .ctor();  // RVA: 0x4AA630
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<System.String> <>9__127_6;
    // static System.Func<System.String> <>9__127_7;
    // static System.Func<System.String> <>9__127_1;
    // static System.Func<System.String> <>9__127_2;
    // static System.Func<System.String> <>9__127_3;
    // static UnityAction* <>9__127_4;
    // static System.Func<System.String> <>9__127_5;
    // static System.Func<System.String> <>9__127_10;
    // static System.Func<System.String> <>9__128_0;
    // static System.Func<System.String> <>9__130_0;


    // Methods
    static void .cctor();  // RVA: 0x4BC440
    void .ctor();  // RVA: 0x4BC430
    Il2CppString* <Start>b__127_6();  // RVA: 0x4BC340
    Il2CppString* <Start>b__127_7();  // RVA: 0x4BC3A0
    Il2CppString* <Start>b__127_1();  // RVA: 0x4BC1C0
    Il2CppString* <Start>b__127_2();  // RVA: 0x4BC220
    Il2CppString* <Start>b__127_3();  // RVA: 0x4BC280
    void <Start>b__127_4();  // RVA: 0x4B4660
    Il2CppString* <Start>b__127_5();  // RVA: 0x4BC2E0
    Il2CppString* <Start>b__127_10();  // RVA: 0x4BC010
    Il2CppString* <AttachPlayerHpTooltip>b__128_0();  // RVA: 0x4BBC50
    Il2CppString* <AttachPlayerXpTooltip>b__130_0();  // RVA: 0x4BBE60
};

// Namespace: <global>
class <>c__DisplayClass190_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* droppedItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <ShowPopupCard>b__0(ItemData* t);  // RVA: 0x4BC400
};

// Namespace: <global>
class <>c__DisplayClass203_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <RefreshDropsList>b__0(ItemData* t);  // RVA: 0x4BC400
};

// Namespace: <global>
class <>c__DisplayClass215_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* weaponInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetEquippedWeaponData>b__0(ItemData* d);  // RVA: 0x4BC400
};

// Namespace: <global>
class <ApplyDamageVisualsAfterDelay>d__178
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatTurnResult* result; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    BattleScreenUI* <>4__this; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B6780
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B6F60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <CombatEndPopupSequence>d__185
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatResult* result; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool <willShowAnyPopup>5__2; // 0x0030
    bool <delayPanel>5__3; // 0x0031

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B6FA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8030
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <FlashBar>d__214
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B81B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B81C0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <FlashEnemyHitRed>d__208
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Color <orig>5__2; // 0x0028
    uint8_t pad_0029[0xF]; // 0x0029
    Color <red>5__3; // 0x0038
    uint8_t pad_0039[0xF]; // 0x0039
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B8200
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8520
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayAnimImage>d__153
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B86A0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8870
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayDefeatAnimCoroutine>d__156
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B88B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8A60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayEffectOverlay>d__209
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Image* effectImage; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Sprite[][] effectFrames; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float delaySec; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <frameDuration>5__2; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t <i>5__3; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B8AA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8D40
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayFadeOutInCoroutine>d__182
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float fadeInDuration; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float fadeOutDuration; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <t>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B8D80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9090
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayLevelCompleteAnimCoroutine>d__159
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B92C0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B94C0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayProjectileImpact>d__222
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemData* weaponData; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* canvasRect; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector2 position; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Sprite[][] <frames>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    GameObject* <go>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Image* <img>5__4; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    float <perFrame>5__5; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t <i>5__6; // 0x0054

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B9690
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9D80
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayStaminaBtnIconAnim>d__160
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B9DC0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9F20
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayVsAnimation>d__184
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <frameDuration>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <i>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <elapsed>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B9F60
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA1A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <RefreshBattleTextsNextFrame>d__167
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4BA1E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA4F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <RefreshTitleFrameHeightCoroutine>d__267
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4BA530
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA6B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <ShowPopupCoroutine>d__187
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    BattleScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* headerText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* subtitleText; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ItemInstance* dropItem; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float duration; // 0x0040

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4BA790
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA990
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <SpawnProjectileSpread>d__217
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemData* weaponData; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float extraSpawnDelay; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t count; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    bool suppressLunge; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    BattleScreenUI* <>4__this; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    RectTransform* from; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    RectTransform* to; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    SpriteAnimator* lungeAnimator; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    float <spread>5__2; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float <delay>5__3; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    int32_t <pi>5__4; // 0x0060

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4BA9D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BACE0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <SpawnProjectileVFX>d__221
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RectTransform* from; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* to; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    ItemData* weaponData; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    float extraSpawnDelay; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    SpriteAnimator* lungeAnimator; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    BattleScreenUI* <>4__this; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    bool triggerLungeOnSpawn; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    float verticalOffset; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    float <travelTime>5__2; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    float <arcHeight>5__3; // 0x005C
    uint8_t pad_005D[0x3]; // 0x005D
    RectTransform* <canvasRect>5__4; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Vector2 <fromLocal>5__5; // 0x0068
    uint8_t pad_0069[0x7]; // 0x0069
    Vector2 <toLocal>5__6; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    Sprite[][] <frames>5__7; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    GameObject* <go>5__8; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    RectTransform* <rt>5__9; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Image* <img>5__10; // 0x0090
    uint8_t pad_0091[0x7]; // 0x0091
    Vector2 <dir>5__11; // 0x0098
    uint8_t pad_0099[0x7]; // 0x0099
    float <elapsed>5__12; // 0x00A0
    uint8_t pad_00A1[0x3]; // 0x00A1
    int32_t <frameIdx>5__13; // 0x00A4
    uint8_t pad_00A5[0x3]; // 0x00A5
    float <frameTimer>5__14; // 0x00A8
    uint8_t pad_00A9[0x3]; // 0x00A9
    float <frameDuration>5__15; // 0x00AC

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4BAD20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BBC10
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <WaitForPopupDurationOrSkip>d__188
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool skippable; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    float duration; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    BattleScreenUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float <elapsed>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4BC4B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BC5E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class BattleScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Vector2 PlayerSlashOnPlayerPos;
        // static float DAMAGE_APPLY_DELAY;
        // static float WEAPON_PHANTOM_DURATION;
        // static int32_t MAX_LOG_LINES;
        // static float PROJECTILE_TRAVEL_TIME_FALLBACK;
        // static System.Collections.Generic.Dictionary<System.String,System.Single> kEnemyContentCenterOffsetPx;
        // static System.Collections.Generic.Dictionary<System.String,System.ValueTuple<System.Single,System.Single>> kEnemyAnimati
        uint8_t pad_0000[0x20]; // 0x0000
        Image* battleBackground; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* battleFrame; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* outskirtsBackground; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* villageBackground; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* graveyardBackground; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* forestBackground; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* arenaBackground; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        RectTransform* titleFrame; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* sectorLabel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        TMP_Text* battleProgressLabel; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Image* sectorBarFill; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        TMP_Text* playerNameText; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        TMP_Text* playerLevelText; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        TMP_Text* playerHpText; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Image* playerHpBarEmpty; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Image* playerHpBarFill; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        TMP_Text* enemyNameText; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        TMP_Text* enemyLevelText; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        TMP_Text* enemyHpText; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* enemyHpBarEmpty; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Image* enemyHpBarFill; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Color enemyNameColorVerde; // 0x00C8
        uint8_t pad_00C9[0xF]; // 0x00C9
        Color enemyNameColorGiallo; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        Color enemyNameColorViola; // 0x00E8
        uint8_t pad_00E9[0xF]; // 0x00E9
        TMP_Text* xpLabel; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Image* xpBarFill; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        TMP_Text* battleLevelLabel; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        Image* staminaIconEmpty; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Image* staminaIconFull; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        TMP_Text* staminaLabel; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        GameObject* logPanelOverlay; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        TMP_Text* battleLogText; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        ScrollRect* battleLogScroll; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        Button* logToggleButton; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Button* logCloseButton; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        SidePanelController* logSidePanel; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        GameObject* logSelectedOverlay; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        Transform* dropsListParent; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        GameObject* dropItemPrefab; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Button* dropsToggleButton; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        GameObject* dropsSelectedOverlay; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        GameObject* dropsPanelOverlay; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        SidePanelController* dropsSidePanel; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        GameObject* resultPanel; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        TextAnimator_TMP* resultText; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        TMP_Text* rewardText; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        GameObject* resultDropCard; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        GameObject* resultCover; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        Image* animImage; // 0x01B8
        uint8_t pad_01B9[0x7]; // 0x01B9
        Sprite[][] animItemFrames; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        float animFps; // 0x01C8
        uint8_t pad_01C9[0x7]; // 0x01C9
        GameObject* defeatGO; // 0x01D0
        uint8_t pad_01D1[0x7]; // 0x01D1
        Image* defeatImage; // 0x01D8
        uint8_t pad_01D9[0x7]; // 0x01D9
        Sprite[][] defeatFrames; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        float defeatFps; // 0x01E8
        uint8_t pad_01E9[0x7]; // 0x01E9
        GameObject* levelCompleteGO; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        Image* levelCompleteImage; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        Sprite[][] levelCompleteFrames; // 0x0200
        uint8_t pad_0201[0x7]; // 0x0201
        float levelCompleteFps; // 0x0208
        uint8_t pad_0209[0x7]; // 0x0209
        Image* staminaBtnIcon; // 0x0210
        uint8_t pad_0211[0x7]; // 0x0211
        Sprite[][] staminaBtnIconFrames; // 0x0218
        uint8_t pad_0219[0x7]; // 0x0219
        float staminaBtnIconFps; // 0x0220
        uint8_t pad_0221[0x7]; // 0x0221
        Coroutine* staminaIconCoroutine; // 0x0228
        uint8_t pad_0229[0x7]; // 0x0229
        Button* settingsToggleButton; // 0x0230
        uint8_t pad_0231[0x7]; // 0x0231
        Sprite* settingsOpenSprite; // 0x0238
        uint8_t pad_0239[0x7]; // 0x0239
        Sprite* settingsClosedSprite; // 0x0240
        uint8_t pad_0241[0x7]; // 0x0241
        GameObject* settingsBar; // 0x0248
        uint8_t pad_0249[0x7]; // 0x0249
        Button* settingsQuitButton; // 0x0250
        uint8_t pad_0251[0x7]; // 0x0251
        Button* settingsOptionsButton; // 0x0258
        uint8_t pad_0259[0x7]; // 0x0259
        Button* settingsStatsButton; // 0x0260
        uint8_t pad_0261[0x7]; // 0x0261
        Button* settingsScaleButton; // 0x0268
        uint8_t pad_0269[0x7]; // 0x0269
        GameObject* settingsPanel; // 0x0270
        uint8_t pad_0271[0x7]; // 0x0271
        Image* playerSpriteImage; // 0x0278
        uint8_t pad_0279[0x7]; // 0x0279
        Image* enemySpriteImage; // 0x0280
        uint8_t pad_0281[0x7]; // 0x0281
        Image* playerSlashImage; // 0x0288
        uint8_t pad_0289[0x7]; // 0x0289
        Image* enemyEffectImage; // 0x0290
        uint8_t pad_0291[0x7]; // 0x0291
        Vector2 parryEffectPos; // 0x0298
        uint8_t pad_0299[0x7]; // 0x0299
        Image* parryEffectImage; // 0x02A0
        uint8_t pad_02A1[0x7]; // 0x02A1
        SpriteCollection* parryEffectCollection; // 0x02A8
        uint8_t pad_02A9[0x7]; // 0x02A9
        Coroutine* parryEffectRoutine; // 0x02B0
        uint8_t pad_02B1[0x7]; // 0x02B1
        Vector2 enemyParryEffectPos; // 0x02B8
        uint8_t pad_02B9[0x7]; // 0x02B9
        Image* enemyParryEffectImage; // 0x02C0
        uint8_t pad_02C1[0x7]; // 0x02C1
        Coroutine* enemyParryEffectRoutine; // 0x02C8
        uint8_t pad_02C9[0x7]; // 0x02C9
        Transform* damagePopupContainer; // 0x02D0
        uint8_t pad_02D1[0x7]; // 0x02D1
        BattleVfxOverlay* battleVfxOverlay; // 0x02D8
        uint8_t pad_02D9[0x7]; // 0x02D9
        GameObject* pvpLabel; // 0x02E0
        uint8_t pad_02E1[0x7]; // 0x02E1
        TMP_Text* suddenDeathLabel; // 0x02E8
        uint8_t pad_02E9[0x7]; // 0x02E9
        CanvasGroup* playerHpBar; // 0x02F0
        uint8_t pad_02F1[0x7]; // 0x02F1
        CanvasGroup* enemyHpBar; // 0x02F8
        uint8_t pad_02F9[0x7]; // 0x02F9
        AnimatedHPBar* playerAnimatedHpBar; // 0x0300
        uint8_t pad_0301[0x7]; // 0x0301
        AnimatedHPBar* enemyAnimatedHpBar; // 0x0308
        uint8_t pad_0309[0x7]; // 0x0309
        SpriteAnimator* playerAnimator; // 0x0310
        uint8_t pad_0311[0x7]; // 0x0311
        SpriteAnimator* enemyAnimator; // 0x0318
        uint8_t pad_0319[0x7]; // 0x0319
        EquipOverlayController* battleOverlay; // 0x0320
        uint8_t pad_0321[0x7]; // 0x0321
        EquipOverlayController* enemyPvPOverlay; // 0x0328
        uint8_t pad_0329[0x7]; // 0x0329
        DamagePopup* damagePopup; // 0x0330
        uint8_t pad_0331[0x7]; // 0x0331
        CombatManager* combatManager; // 0x0338
        uint8_t pad_0339[0x7]; // 0x0339
        System.Collections.Generic.List<System.String> battleLogLines; // 0x0340
        uint8_t pad_0341[0x7]; // 0x0341
        EnemyState* currentEnemy; // 0x0348
        uint8_t pad_0349[0x7]; // 0x0349
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> sessionDrops; // 0x0350
        uint8_t pad_0351[0x7]; // 0x0351
        bool logPanelOpen; // 0x0358
        bool settingsBarOpen; // 0x0359
        uint8_t pad_035A[0x6]; // 0x035A
        GameObject* dropsBadge; // 0x0360
        uint8_t pad_0361[0x7]; // 0x0361
        int32_t seenDropsCount; // 0x0368
        uint8_t pad_0369[0x7]; // 0x0369
        Image* pvpEnemySlashImage; // 0x0370
        uint8_t pad_0371[0x7]; // 0x0371
        bool isPopupSequenceActive; // 0x0378
        uint8_t pad_0379[0x7]; // 0x0379
        Coroutine* activePopupSequence; // 0x0380
        uint8_t pad_0381[0x7]; // 0x0381
        GameObject* fadeOverlayGO; // 0x0388
        uint8_t pad_0389[0x7]; // 0x0389
        Image* fadeOverlayImage; // 0x0390
        uint8_t pad_0391[0x7]; // 0x0391
        bool isFadeActive; // 0x0398
        uint8_t pad_0399[0x7]; // 0x0399
        Image* vsImage; // 0x03A0
        uint8_t pad_03A1[0x7]; // 0x03A1
        int32_t vsFrameRate; // 0x03A8
        uint8_t pad_03A9[0x7]; // 0x03A9
        Sprite[][] vsFrames; // 0x03B0
        uint8_t pad_03B1[0x7]; // 0x03B1
        bool isVsAnimationActive; // 0x03B8
        uint8_t pad_03B9[0x7]; // 0x03B9
        GameObject* playerTooltipHitbox; // 0x03C0
        uint8_t pad_03C1[0x7]; // 0x03C1
        GameObject* enemyTooltipHitbox; // 0x03C8
        uint8_t pad_03C9[0x7]; // 0x03C9
        RectTransform* overlayBattleScreenRT; // 0x03D0
        uint8_t pad_03D1[0x7]; // 0x03D1
        Vector2 playerIdleLocalCanvas; // 0x03D8
        uint8_t pad_03D9[0x7]; // 0x03D9
        bool playerIdleCached; // 0x03E0
        uint8_t pad_03E1[0x3]; // 0x03E1
        Vector2 enemyIdleLocalCanvas; // 0x03E4
        uint8_t pad_03E5[0x7]; // 0x03E5
        bool enemyIdleCached; // 0x03EC
        uint8_t pad_03ED[0x3]; // 0x03ED
        Coroutine* animCoroutine; // 0x03F0
        uint8_t pad_03F1[0x7]; // 0x03F1
        Coroutine* defeatAnimCoroutine; // 0x03F8
        uint8_t pad_03F9[0x7]; // 0x03F9
        Coroutine* levelCompleteAnimCoroutine; // 0x0400
        uint8_t pad_0401[0x7]; // 0x0401
        LeaderboardUI* leaderboardUI; // 0x0408
        uint8_t pad_0409[0x7]; // 0x0409
        bool dropsGridLayoutEnsured; // 0x0410
        uint8_t pad_0411[0x7]; // 0x0411
        Canvas* _cachedWorldCanvas; // 0x0418
        uint8_t pad_0419[0x7]; // 0x0419
        bool _worldCanvasLookupTried; // 0x0420
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4A1B30
        static Il2CppString* T(Il2CppString* key, Object[][] args);  // RVA: 0x4A1AC0
        static Il2CppString* LocalizeEnemyDisplayName(Il2CppString* fullName, Il2CppString* categoryName);  // RVA: 0x49A230
        bool get_IsPopupSequenceActive();  // RVA: 0x4A7020
        bool get_IsFadeActive();  // RVA: 0x4A7010
        bool get_IsVsAnimationActive();  // RVA: 0x4A7030
        void Start();  // RVA: 0x49FF60
        void AttachPlayerHpTooltip();  // RVA: 0x48F9D0
        void AttachEnemyHpTooltip();  // RVA: 0x48F840
        void AttachPlayerXpTooltip();  // RVA: 0x48FBF0
        void SetupDamagePopup();  // RVA: 0x49E400
        void EnsureTooltipHitboxProxies();  // RVA: 0x493180
        void SyncTooltipHitboxes();  // RVA: 0x499EF0
        void SyncOneTooltipHitbox(GameObject* proxy, Image* targetSprite, Vector2 localOffsetCanvasUnits, bool idleCached, Vector2 idleLocalCanvas);  // RVA: 0x4A1660
        void LateUpdate();  // RVA: 0x499EF0
        void OnEnable();  // RVA: 0x49AC40
        void OnDisable();  // RVA: 0x49A360
        void ToggleLogPanel();  // RVA: 0x4A1E40
        void ToggleDropsPanel();  // RVA: 0x4A1B90
        void SetPanelOverlays(bool log, bool drops);  // RVA: 0x49E0D0
        static void AddTooltipToButton(Button* btn, System.Func<System.String> textProvider, Side side);  // RVA: 0x48F430
        void ToggleSettingsBar();  // RVA: 0x4A1FE0
        void UpdateSettingsToggleIcon();  // RVA: 0x4A6150
        void SetResultPanelActive(bool active, bool showAnim, bool playSfx);  // RVA: 0x49E1B0
        IEnumerator* PlayAnimImage();  // RVA: 0x49B640
        void PlayDefeatAnimation();  // RVA: 0x49B720
        IEnumerator* PlayDefeatAnimCoroutine();  // RVA: 0x49B6B0
        void PlayLevelCompleteAnimation();  // RVA: 0x49BC00
        IEnumerator* PlayLevelCompleteAnimCoroutine();  // RVA: 0x49BB90
        IEnumerator* PlayStaminaBtnIconAnim();  // RVA: 0x49BFE0
        void OnQuitClicked();  // RVA: 0x49B4C0
        void OnLeaderboardClicked();  // RVA: 0x49B3E0
        void ToggleSettingsPanel();  // RVA: 0x4A2140
        void RefreshBattleUI();  // RVA: 0x49C2D0
        void HandleLanguageChanged();  // RVA: 0x497EB0
        IEnumerator* RefreshBattleTextsNextFrame();  // RVA: 0x49C260
        void EnsureSuddenDeathLabel();  // RVA: 0x492D00
        void UpdateProgressDisplay(int32_t sector);  // RVA: 0x4A54F0
        void UpdatePlayerHpDisplay(PlayerState* player);  // RVA: 0x4A51B0
        void UpdateEnemyHpDisplay(EnemyState* enemy);  // RVA: 0x4A35F0
        void UpdateXpDisplay(PlayerState* player);  // RVA: 0x4A6420
        void UpdateStaminaDisplay(PlayerState* player);  // RVA: 0x4A6230
        void RefreshEnemyNameLabel(EnemyState* enemy);  // RVA: 0x49D340
        void HandleCombatStart(EnemyState* enemy);  // RVA: 0x496C10
        void HandleCombatTurn(CombatTurnResult* result);  // RVA: 0x497720
        IEnumerator* ApplyDamageVisualsAfterDelay(CombatTurnResult* result, float delay);  // RVA: 0x48F7A0
        void HandleCombatEnd(CombatResult* result);  // RVA: 0x495A40
        void HandleStaminaDepleted();  // RVA: 0x497F40
        void EnsureFadeOverlay();  // RVA: 0x492270
        IEnumerator* PlayFadeOutInCoroutine(float fadeInDuration, float fadeOutDuration);  // RVA: 0x49BAF0
        void StartVsSplash();  // RVA: 0x49FE30
        IEnumerator* PlayVsAnimation();  // RVA: 0x49C050
        IEnumerator* CombatEndPopupSequence(CombatResult* result);  // RVA: 0x491890
        static bool ShouldShowAnyPopup(CombatResult* result);  // RVA: 0x49F400
        IEnumerator* ShowPopupCoroutine(Il2CppString* headerText, Il2CppString* subtitleText, ItemInstance* dropItem, float duration);  // RVA: 0x49F710
        IEnumerator* WaitForPopupDurationOrSkip(float duration, bool skippable);  // RVA: 0x4A6800
        bool PopupSkipClickedThisFrame();  // RVA: 0x49C0C0
        void ShowPopupCard(ItemInstance* droppedItem);  // RVA: 0x49F460
        static Il2CppString* WrapWave(CombatResult* result, Il2CppString* body);  // RVA: 0x4A68A0
        Il2CppString* BuildSectorClearedText(CombatResult* result);  // RVA: 0x491140
        Il2CppString* BuildArenaActivatedText(CombatResult* result);  // RVA: 0x48FE10
        static Il2CppString* BuildLevelUpText(CombatResult* result);  // RVA: 0x490870
        static Il2CppString* BuildPvPResultText(CombatResult* result);  // RVA: 0x490AC0
        static Il2CppString* BuildPvPRewardSubtitle(CombatResult* result);  // RVA: 0x490E20
        static Il2CppString* BuildArenaWaveClearedText(CombatResult* result);  // RVA: 0x490340
        static Il2CppString* BuildArenaWaveProgressText(CombatResult* result);  // RVA: 0x490650
        static Il2CppString* BuildArenaDefeatText(CombatResult* result);  // RVA: 0x490160
        void SpawnDamagePopup(CombatTurnResult* result);  // RVA: 0x49F7F0
        void HandleHealTick(int32_t healAmount);  // RVA: 0x497C20
        void HandleEnemyHealTick(int32_t healAmount);  // RVA: 0x4977E0
        void RefreshDropsList();  // RVA: 0x49C8D0
        void EnsureDropsGridLayout();  // RVA: 0x491E00
        GameObject* CreateDropLabel(Il2CppString* text, Color color);  // RVA: 0x491BD0
        void TriggerHitAnimation(bool hitPlayer);  // RVA: 0x4A2320
        IEnumerator* FlashEnemyHitRed();  // RVA: 0x493BF0
        IEnumerator* PlayEffectOverlay(Image* effectImage, Sprite[][] effectFrames, float delaySec);  // RVA: 0x49B860
        void PlayParryEffect();  // RVA: 0x49BD40
        void EnsureParryEffectImage();  // RVA: 0x4928F0
        void PlayEnemyParryEffect();  // RVA: 0x49B900
        void EnsureEnemyParryEffectImage();  // RVA: 0x491E80
        IEnumerator* FlashBar(CanvasGroup* bar);  // RVA: 0x493BA0
        ItemData* GetEquippedWeaponData(Il2CppString* slotKey);  // RVA: 0x495330
        ItemData* GetPvPEnemyWeaponData(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x495550
        IEnumerator* SpawnProjectileSpread(RectTransform* from, RectTransform* to, int32_t count, ItemData* weaponData, SpriteAnimator* lungeAnimator, float extraSpawnDelay, bool suppressLunge);  // RVA: 0x49FC30
        Canvas* FindWorldCanvas();  // RVA: 0x493A70
        IEnumerator* SpawnProjectileVFX(RectTransform* from, RectTransform* to, float verticalOffset, ItemData* weaponData, bool triggerLungeOnSpawn, SpriteAnimator* lungeAnimator, float extraSpawnDelay);  // RVA: 0x49FD30
        IEnumerator* PlayProjectileImpact(RectTransform* canvasRect, Vector2 position, ItemData* weaponData);  // RVA: 0x49BF30
        void AppendBattleLog(Il2CppString* line);  // RVA: 0x48F560
        SpriteCollection* LoadSlashSottoCollection();  // RVA: 0x49A170
        SpriteCollection* LoadSlashSopraCollection();  // RVA: 0x49A120
        SpriteCollection* LoadSlashAttack3Collection();  // RVA: 0x49A080
        SpriteCollection* LoadSlashRightAboveCollection();  // RVA: 0x49A0D0
        SpriteCollection* LoadMagicAttackCollection();  // RVA: 0x49A030
        bool HasAnyMeleeWeaponEquipped();  // RVA: 0x498140
        bool IsMeleeInSlot(PlayerState* ps, Il2CppString* slotKey);  // RVA: 0x499760
        bool IsRangedInSlot(PlayerState* ps, Il2CppString* slotKey);  // RVA: 0x499D20
        void RefreshPlayerAttackAnimationGate();  // RVA: 0x49D4F0
        static Attack2Mode ResolveAttack2Mode(bool meleeArma1, bool meleeArma2);  // RVA: 0x49DCD0
        bool HasPvPMeleeWeaponEquipped(EnemyState* enemy);  // RVA: 0x498210
        bool IsPvPMeleeInSlot(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x499910
        bool IsPvPRangedInSlot(EnemyState* enemy, Il2CppString* slotKey);  // RVA: 0x499B10
        void RefreshPlayerSlashSprites();  // RVA: 0x49D650
        Color GetWeapon1SlashColor();  // RVA: 0x4958C0
        Color GetWeapon2SlashColor();  // RVA: 0x495980
        Color GetElementSlashColor(ElementCategory cat);  // RVA: 0x493D90
        Il2CppString* GetCharacterIdleResourceSuffix();  // RVA: 0x493C60
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x49DDC0
        static Il2CppString* ResolveCharacterAttackPrefix(CharacterType c);  // RVA: 0x49DCF0
        void InitPlayerSprite();  // RVA: 0x498450
        void UpdateEnemySprite(EnemyState* enemy);  // RVA: 0x4A38A0
        void SetupPvPEnemyOverlay(EnemyState* enemy);  // RVA: 0x49E6C0
        void SetupPvPTooltip(EnemyState* enemy);  // RVA: 0x49F1B0
        void ClearPvPTooltip();  // RVA: 0x4917C0
        void SetupPvETooltip(EnemyState* enemy);  // RVA: 0x49E560
        void ClearPvETooltip();  // RVA: 0x4916F0
        float ComputeEnemyAlignedY(Il2CppString* categoryName, float frameSize, float displaySize);  // RVA: 0x491920
        EnemyCategoryData* FindEnemyCategoryData(Il2CppString* categoryName);  // RVA: 0x493710
        Il2CppString* GetEnemySpriteResource(Il2CppString* categoryName);  // RVA: 0x494E90
        Il2CppString* GetEnemyAttackResource(Il2CppString* categoryName);  // RVA: 0x494060
        Il2CppString* GetEnemyHitResource(Il2CppString* categoryName);  // RVA: 0x4949A0
        Il2CppString* GetEnemyDeathResource(Il2CppString* categoryName);  // RVA: 0x494500
        Il2CppString* GetEnemyAttackEffectResource(Il2CppString* categoryName);  // RVA: 0x493E90
        Color GetEnemyNameColor(EnemyColor color);  // RVA: 0x494E40
        void OnRestClicked();  // RVA: 0x49B5B0
        void SetEnemyHpVisible(bool visible);  // RVA: 0x49DF80
        Color GetRarityColor(Il2CppString* rarity);  // RVA: 0x495750
        void SetBarFill(Image* fillImage, float value);  // RVA: 0x49DE90
        void UpdateSectorBackground(int32_t sectorIndex);  // RVA: 0x4A5CE0
        void RefreshTitleFrameHeight();  // RVA: 0x49DBC0
        IEnumerator* RefreshTitleFrameHeightCoroutine();  // RVA: 0x49DB50
        void .ctor();  // RVA: 0x4A6EC0
        static void .cctor();  // RVA: 0x4A6920
        void <Start>b__127_0();  // RVA: 0x4A32F0
        void <Start>b__127_8();  // RVA: 0x4A33D0
        void <Start>b__127_9();  // RVA: 0x4A34A0
        Il2CppString* <AttachEnemyHpTooltip>b__129_0();  // RVA: 0x4A3190
        void <ToggleSettingsPanel>b__164_0();  // RVA: 0x4A3570
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class ElementVfxMapping
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ElementCategory category; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameObject* vfxPrefab; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Vector2 position; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float displaySize; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Sprite[][] frames; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t repeatCount; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    float repeatSpread; // 0x003C

    // Methods
    void .ctor();  // RVA: 0x4AF260
};

// Namespace: <global>
class VfxSlot
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GameObject* vfxPrefab; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Vector2 position; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float displaySize; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Sprite[][] frames; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class ElementPositionEntry
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ElementCategory category; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    Vector2 position; // 0x0014
    uint8_t pad_0015[0x7]; // 0x0015
    bool overridePosition; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    float displaySize; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4AF250
};

// Namespace: <global>
class PerEnemyVfxOverride
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* enemyCategoryName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool overrideCrit; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Vector2 critPosition; // 0x001C
    uint8_t pad_001D[0x7]; // 0x001D
    float critDisplaySize; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    bool overrideHeal; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    Vector2 healPosition; // 0x002C
    uint8_t pad_002D[0x7]; // 0x002D
    float healDisplaySize; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.ElementPositionEntry> elementOverrides; // 0x0038

    // Methods
    void .ctor();  // RVA: 0x4B61A0
};

// Namespace: <global>
class <DelayedVfxAt>d__76
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    BattleVfxOverlay* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    RectTransform* anchor; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Sprite[][] frames; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float size; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float duration; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    Vector2 position; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Vector2 offset; // 0x0050

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B8070
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8170
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayFlipbook>d__81
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Sprite[][] frames; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float duration; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Image* img; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    GameObject* host; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    int32_t <n>5__2; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float <perFrame>5__3; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B90D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B9280
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class BattleVfxOverlay : public MonoBehaviour
    {
    public:
        // Static fields
        // static Il2CppString* PLAYER_TARGET_KEY;
        // static Il2CppString* PVP_CATEGORY_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* canvasRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        RawImage* overlayRawImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        VfxSlot* critVfx; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        VfxSlot* healVfx; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        VfxSlot* meleeSlashVfx; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.ElementVfxMapping> elementVfxMappings; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<AutoBattle.UI.BattleVfxOverlay.PerEnemyVfxOverride> perEnemyOverrides; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float vfxDisplaySize; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float vfxDuration; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float elementalDisplaySize; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float elementalDuration; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        Color slashColorFrost; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        Color slashColorFlame; // 0x0078
        uint8_t pad_0079[0xF]; // 0x0079
        Color slashColorArcane; // 0x0088
        uint8_t pad_0089[0xF]; // 0x0089
        Color slashColorHoly; // 0x0098
        uint8_t pad_0099[0xF]; // 0x0099
        Color slashColorShadow; // 0x00A8
        uint8_t pad_00A9[0xF]; // 0x00A9
        Il2CppString* projectileSpritesResource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* projectileImpactSpritesResource; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float projectileTravelTime; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float projectileSize; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float projectileImpactSize; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float projectileImpactDuration; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float projectileArcHeight; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        int32_t projectileAttack2Count; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float projectileSpreadOffset; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float projectileSpreadDelay; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool projectileRotateToDirection; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color projectileTint; // 0x00EC
        uint8_t pad_00ED[0xF]; // 0x00ED
        Color projectileImpactTint; // 0x00FC
        uint8_t pad_00FD[0x13]; // 0x00FD
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,AutoBattle.UI.BattleVfxOverlay.ElementVfxMapping> elementMappingLookup; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        System.Collections.Generic.Dictionary<System.String,AutoBattle.UI.BattleVfxOverlay.PerEnemyVfxOverride> perEnemyOverrideLookup; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        CombatManager* _combatManager; // 0x0120
    
        // Methods
        Color GetSlashTintFor(ElementCategory cat);  // RVA: 0x4AB1D0
        Il2CppString* get_ProjectileSpritesResource();  // RVA: 0x4AC8B0
        Il2CppString* get_ProjectileImpactSpritesResource();  // RVA: 0x4AC850
        float get_ProjectileTravelTime();  // RVA: 0x4AC8D0
        float get_ProjectileSize();  // RVA: 0x4AC880
        float get_ProjectileImpactSize();  // RVA: 0x4AC840
        float get_ProjectileImpactDuration();  // RVA: 0x4AC830
        float get_ProjectileArcHeight();  // RVA: 0x4AC810
        int32_t get_ProjectileAttack2Count();  // RVA: 0x4AC820
        float get_ProjectileSpreadOffset();  // RVA: 0x4AC8A0
        float get_ProjectileSpreadDelay();  // RVA: 0x4AC890
        bool get_ProjectileRotateToDirection();  // RVA: 0x4AC870
        Color get_ProjectileTint();  // RVA: 0x4AC8C0
        Color get_ProjectileImpactTint();  // RVA: 0x4AC860
        void Awake();  // RVA: 0x4AA670
        void OnEnable();  // RVA: 0x4AB530
        void OnDisable();  // RVA: 0x4AB3D0
        void HandleCombatEnd(CombatResult* result);  // RVA: 0x4AB240
        void BuildLookup();  // RVA: 0x4AA710
        PerEnemyVfxOverride* GetEnemyOverride(Il2CppString* targetEnemyCategory);  // RVA: 0x4AAFC0
        Vector2 MirrorPositionForPlayerTargetIfNeeded(Vector2 position, Il2CppString* targetEnemyCategory, bool overrideApplied);  // RVA: 0x4AB2E0
        void PlayCritAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4AB6A0
        bool PlayMeleeSlashAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4ABE90
        void PlayHealAt(RectTransform* anchor, Il2CppString* targetEnemyCategory);  // RVA: 0x4ABC30
        bool PlayElementalAt(RectTransform* anchor, ElementCategory element, Il2CppString* targetEnemyCategory);  // RVA: 0x4AB7F0
        IEnumerator* DelayedVfxAt(RectTransform* anchor, Sprite[][] frames, float size, float duration, Vector2 position, Vector2 offset, float delay);  // RVA: 0x4AAEC0
        void CleanupAllVfx();  // RVA: 0x4AAA90
        static bool IsVfxObject(Il2CppString* name);  // RVA: 0x4AB250
        RectTransform* GetRootCanvasRect();  // RVA: 0x4AB060
        void PlayVfxAt(RectTransform* anchor, Sprite[][] frames, float displaySize, float duration, Vector2 position, Vector2 additionalOffset);  // RVA: 0x4ABFF0
        IEnumerator* PlayFlipbook(Image* img, GameObject* host, Sprite[][] frames, float duration);  // RVA: 0x4ABB80
        void .ctor();  // RVA: 0x4AC5A0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <ShowDemoSaveNoticeNextFrame>d__12
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4BA6F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4BA750
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class CreationScreenUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_InputField* nameInput; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Dropdown* genderDropdown; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Button* startButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t maxNameLength; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* avatarPreview; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite* character1IdleSprite; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* character2IdleSprite; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* character3IdleSprite; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* character4IdleSprite; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* character5IdleSprite; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* character6IdleSprite; // 0x0070
    
        // Methods
        void OnEnable();  // RVA: 0x4AC8E0
        IEnumerator* ShowDemoSaveNoticeNextFrame();  // RVA: 0x4AD0B0
        void Start();  // RVA: 0x4AD100
        void UpdateAvatarPreview(int32_t index);  // RVA: 0x4AD500
        void OnStartButtonClicked();  // RVA: 0x4ACBB0
        static void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4ACD50
        void .ctor();  // RVA: 0x4AD5E0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimatePopup>d__27
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* popupGO; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RectTransform* rt; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TMP_Text* text; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    DamagePopup* <>4__this; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Vector2 <startPos>5__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    Vector2 <endPos>5__3; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    Color <startColor>5__4; // 0x0050
    uint8_t pad_0051[0xF]; // 0x0051
    Outline* <outline>5__5; // 0x0060
    uint8_t pad_0061[0x7]; // 0x0061
    Color <outlineStartColor>5__6; // 0x0068
    uint8_t pad_0069[0xF]; // 0x0069
    float <wigglePhase>5__7; // 0x0078
    uint8_t pad_0079[0x3]; // 0x0079
    float <elapsed>5__8; // 0x007C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B6230
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B6710
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class DamagePopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static Color COLOR_NORMAL;
        // static float POPUP_LIFETIME;
        // static float FLOAT_DISTANCE;
        // static float FONT_SIZE_NORMAL;
        // static float FONT_SIZE_CRIT;
        // static float FONT_SIZE_PARRY;
        // static Il2CppString* TEMPLATE_KEY_BASE;
        // static Il2CppString* TEMPLATE_KEY_CRIT;
        // static Il2CppString* TEMPLATE_KEY_PARRY;
        // static Il2CppString* TEMPLATE_KEY_HEAL;
        // static Color COLOR_CRIT;
        // static Color COLOR_PARRY;
        // static Color COLOR_HEAL;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* popupContainer; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float damageReference; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float fontSizeMaxMultiplier; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        Color colorDamageLow; // 0x0030
        uint8_t pad_0031[0xF]; // 0x0031
        Color colorDamageMid; // 0x0040
        uint8_t pad_0041[0xF]; // 0x0041
        Color colorDamageHigh; // 0x0050
        uint8_t pad_0051[0xF]; // 0x0051
        float wiggleAmplitude; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float wiggleFrequency; // 0x0064
    
        // Methods
        void SetContainer(Transform* container);  // RVA: 0x4ADCE0
        void ShowDamage(RectTransform* anchor, int32_t damage, bool isCrit, bool isParry);  // RVA: 0x4ADCF0
        void ShowHeal(RectTransform* anchor, int32_t healAmount);  // RVA: 0x4AE0A0
        GameObject* SpawnPopup(RectTransform* anchor, Il2CppString* templateKey);  // RVA: 0x4AE320
        GameObject* BuildDefaultPopup();  // RVA: 0x4AD6B0
        void ClearAllPopups();  // RVA: 0x4AD890
        IEnumerator* AnimatePopup(GameObject* popupGO, RectTransform* rt, TMP_Text* text);  // RVA: 0x4AD5F0
        float GetDynamicFontSize(float baseSize, int32_t damage);  // RVA: 0x4ADC70
        Color GetDynamicDamageColor(int32_t damage);  // RVA: 0x4ADB60
        void .ctor();  // RVA: 0x4AE800
        static void .cctor();  // RVA: 0x4AE770
    };

    // Namespace: AutoBattle.UI
    class DemoSaveNoticePopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static DemoSaveNoticePopup* _sceneInstance;
        // static bool _sceneLookupAttempted;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* popupRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Button* gotItButton; // 0x0028
    
        // Methods
        static DemoSaveNoticePopup* get_SceneInstance();  // RVA: 0x4AEF70
        void OnDestroy();  // RVA: 0x4AE8D0
        static void ResetStatics();  // RVA: 0x4AE990
        static void TryShow();  // RVA: 0x4AEB80
        void Show();  // RVA: 0x4AEA00
        void Dismiss();  // RVA: 0x4AE850
        void .ctor();  // RVA: 0x4AEF60
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <ForceHeightNextFrame>d__2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    DropdownHeightFixer* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4B8560
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4B8660
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class DropdownHeightFixer : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float fixedHeight; // 0x0020
    
        // Methods
        void OnEnable();  // RVA: 0x4AF1C0
        IEnumerator* ForceHeightNextFrame();  // RVA: 0x4AF150
        void .ctor();  // RVA: 0x4AF240
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass100_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetItemTemplateForSlot>b__0(ItemData* t);  // RVA: 0x4BC400
};

// Namespace: <global>
class <>c__DisplayClass101_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetDefaultWeaponSpriteForSlot>b__0(ItemData* t);  // RVA: 0x4BC400
};

// Namespace: <global>
class <>c__DisplayClass107_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetOverlaySpriteForSlot>b__0(ItemData* t);  // RVA: 0x4BC400
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class EquipOverlayController : public MonoBehaviour
    {
    public:
        // Static fields
        // static Vector2 FemaleHeadDelta;
        // static Vector2 FemaleBodyDelta;
        // static Vector2 FemaleWeapon2Delta;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Image* headOverlayImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* bodyOverlayImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* weaponOverlayImage; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* weapon2OverlayImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* weapon2HandOverlayImage; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Vector2 headSize; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 bodySize; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Vector2 weaponSize; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Vector2 weapon2Size; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Vector2 weapon2HandSize; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Vector2 weapon2HandOffset; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        bool weapon2HandEnabled; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float pixelScale; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        EquipAnchorData* anchorData; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        EquipAnchorData* maleAnchorData; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        EquipAnchorData* femaleAnchorData; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Vector2 weapon2BaseOffset; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float anchorRefPixelScale; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        Vector2 refPlayerAnchoredPos; // 0x00A4
        uint8_t pad_00A5[0xB]; // 0x00A5
        Sprite* defaultHeadSprite; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite* defaultBodySprite; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite* defaultSwordSprite; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Sprite* defaultAxeSprite; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Sprite* defaultShieldSprite; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Sprite* defaultSpearSprite; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Sprite* defaultHandSprite; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Sprite* defaultHandSpriteBlack; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        bool isCharacter4; // 0x00F0
        bool spritesLoaded; // 0x00F1
        bool currentIsAttacking; // 0x00F2
        uint8_t pad_00F3[0x1]; // 0x00F3
        int32_t currentFrame; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        int32_t currentAttackVariant; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool weaponVisible; // 0x00FC
        bool weapon2Visible; // 0x00FD
        uint8_t pad_00FE[0x2]; // 0x00FE
        Sprite[][] weapon1AnimFrames; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        float weapon1AnimFps; // 0x0108
        uint8_t pad_0109[0x3]; // 0x0109
        float weapon1AnimTimer; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        int32_t weapon1AnimIndex; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Sprite[][] weapon2AnimFrames; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        float weapon2AnimFps; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        float weapon2AnimTimer; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        int32_t weapon2AnimIndex; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        Sprite[][] headAnimFrames; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        float headAnimFps; // 0x0138
        uint8_t pad_0139[0x3]; // 0x0139
        float headAnimTimer; // 0x013C
        uint8_t pad_013D[0x3]; // 0x013D
        int32_t headAnimIndex; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Sprite[][] attackOverlayFrames1; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        float attackOverlayFps1; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        float attackOverlayTimer1; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        int32_t attackOverlayIndex1; // 0x0158
        uint8_t pad_0159[0x3]; // 0x0159
        bool attackOverlayPlaying1; // 0x015C
        uint8_t pad_015D[0x3]; // 0x015D
        AttackOverlayMode attackOverlayMode1; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        Sprite* attackOverlayRestoreSprite1; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Vector2 attackOverlayRestoreSize1; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Sprite[][] attackOverlayFrames2; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        float attackOverlayFps2; // 0x0180
        uint8_t pad_0181[0x3]; // 0x0181
        float attackOverlayTimer2; // 0x0184
        uint8_t pad_0185[0x3]; // 0x0185
        int32_t attackOverlayIndex2; // 0x0188
        uint8_t pad_0189[0x3]; // 0x0189
        bool attackOverlayPlaying2; // 0x018C
        uint8_t pad_018D[0x3]; // 0x018D
        AttackOverlayMode attackOverlayMode2; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Sprite* attackOverlayRestoreSprite2; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        Vector2 attackOverlayRestoreSize2; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        Image* weapon1AttackOverlayImage; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        Image* weapon2AttackOverlayImage; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        bool useFixedPositions; // 0x01B8
        uint8_t pad_01B9[0x3]; // 0x01B9
        Vector2 fixedHeadPos; // 0x01BC
        uint8_t pad_01BD[0x7]; // 0x01BD
        Vector2 fixedBodyPos; // 0x01C4
        uint8_t pad_01C5[0x7]; // 0x01C5
        Vector2 fixedWeaponPos; // 0x01CC
        uint8_t pad_01CD[0x7]; // 0x01CD
        Vector2 fixedWeapon2Pos; // 0x01D4
        uint8_t pad_01D5[0x7]; // 0x01D5
        bool isFemaleCharacter; // 0x01DC
        bool mirrorX; // 0x01DD
        uint8_t pad_01DE[0x2]; // 0x01DE
        Vector2 mirrorHostIdlePos; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool hasMirrorHostIdlePos; // 0x01E8
        bool pvpModeActive; // 0x01E9
        bool pvpWeapon2IsShield; // 0x01EA
        uint8_t pad_01EB[0x5]; // 0x01EB
        System.Collections.Generic.Dictionary<System.String,AutoBattle.Steam.EquippedItemInfo> pvpItemBySlot; // 0x01F0
    
        // Methods
        RectTransform* get_Weapon1OverlayRect();  // RVA: 0x4B5F90
        RectTransform* get_Weapon2OverlayRect();  // RVA: 0x4B6040
        float GetEffectiveAnchorRefPixelScale();  // RVA: 0x4B0E80
        void Awake();  // RVA: 0x4AF390
        void Update();  // RVA: 0x4B5740
        void PlayWeaponAttackAnim(Il2CppString* slotKey);  // RVA: 0x4B2470
        void LoadResources();  // RVA: 0x4B1A30
        void EnsureOverlayImages();  // RVA: 0x4B0160
        Image* CreateAttackOverlayChild(Il2CppString* objName, Transform* parent);  // RVA: 0x4AF980
        Image* CreateHandChild(Transform* parent, Il2CppString* objName, Vector2 size, Vector2 localOffset);  // RVA: 0x4AFBA0
        Image* CreateOverlaySibling(Il2CppString* objName, Vector2 size, bool behind);  // RVA: 0x4AFF20
        Image* CreateOverlayChild(Il2CppString* objName, Vector2 size);  // RVA: 0x4AFD60
        void Configure(Vector2 headSz, Vector2 bodySz, Vector2 weaponSz, float pxScale, Vector2 weapon2Sz);  // RVA: 0x4AF630
        void RefreshOverlays();  // RVA: 0x4B32B0
        void UpdateHandOverlayVisibility();  // RVA: 0x4B4900
        bool IsWeapon2Shield();  // RVA: 0x4B1860
        void SetHandOverlayEnabled(bool enabled);  // RVA: 0x4B4490
        void ConfigureHandOverlay(Vector2 size, Vector2 localOffset);  // RVA: 0x4AF540
        void RefreshWeaponSlotOverlay(Image* overlayImage, System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey, bool visible);  // RVA: 0x4B3810
        ItemData* GetItemTemplateForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B0F20
        Sprite* GetDefaultWeaponSpriteForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B0710
        void OnAnimationFrameChanged(bool isAttacking, int32_t frameIndex, int32_t attackVariant);  // RVA: 0x4B20D0
        void SetWeaponVisible(bool visible);  // RVA: 0x4B47C0
        void SetWeapon2Visible(bool visible);  // RVA: 0x4B4680
        void UpdateOverlayPositions();  // RVA: 0x4B4A70
        void RefreshSlotOverlay(Image* overlayImage, Sprite* defaultSprite, System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B3560
        Sprite* GetOverlaySpriteForSlot(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, PlayerState* ps, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, Il2CppString* slotKey);  // RVA: 0x4B1080
        bool IsSlotOccupied(System.Collections.Generic.Dictionary<System.String,System.Int32> equipped, Il2CppString* slotKey);  // RVA: 0x4B16A0
        void RefreshFromPvPItems(System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> pvpItems);  // RVA: 0x4B2B30
        void ApplyPvPSlotSprite(Image* overlayImage, EquippedItemInfo* info, Sprite* fallbackDefault, bool weaponVisibleGate, bool useWeapon2Gate);  // RVA: 0x4AF280
        Sprite* ResolvePvPItemSprite(EquippedItemInfo* info, Sprite* fallbackDefault);  // RVA: 0x4B3B60
        Sprite* PickWeaponDefault(EquippedItemInfo* info);  // RVA: 0x4B20F0
        static bool IsShieldName(Il2CppString* itemName);  // RVA: 0x4B1570
        static bool IsSpearName(Il2CppString* itemName);  // RVA: 0x4B1730
        static bool IsAxeName(Il2CppString* itemName);  // RVA: 0x4B1460
        void HideAllOverlays();  // RVA: 0x4B12E0
        void SetFixedPositions(Vector2 headPos, Vector2 weaponPos, bool flipWeapon, Vector2 bodyPos, Vector2 weapon2Pos);  // RVA: 0x4B4020
        void ClearFixedPositions();  // RVA: 0x4AF3A0
        void SetMirrorX(bool mirror);  // RVA: 0x4B44C0
        void SetCharacterType(CharacterType characterType);  // RVA: 0x4B3E30
        void SetFemaleMode(bool female);  // RVA: 0x4B3F20
        void SetOffsets(Vector2 head, Vector2 weapon);  // RVA: 0x4B4660
        void SetSizes(Vector2 head, Vector2 weapon);  // RVA: 0x4B4670
        Sprite* GetWeapon1Sprite();  // RVA: 0x4B1250
        void .ctor();  // RVA: 0x4B5EB0
        static void .cctor();  // RVA: 0x4B5E30
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct CrossSynergyEntryData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slotName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* itemName; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ElementCategory itemCategory; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bonusText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* context; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    ElementCategory targetCategory; // 0x0038
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slotKey; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <Start>b__1();  // RVA: 0x4D3170
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <RefreshSlot>b__0(ItemData* id);  // RVA: 0x4BC400
};

// Namespace: <global>
class <>c__DisplayClass46_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* inst; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <DetectActiveCrossSynergies>b__0(ItemInstance* it);  // RVA: 0x4D3430
    bool <DetectActiveCrossSynergies>b__1(ItemData* it);  // RVA: 0x4D3450
};

// Namespace: <global>
class <>c__DisplayClass46_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* inst; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <DetectActiveCrossSynergies>b__2(ItemInstance* it);  // RVA: 0x4D3430
    bool <DetectActiveCrossSynergies>b__3(ItemData* it);  // RVA: 0x4D3450
};

// Namespace: <global>
class <>c__DisplayClass48_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedItem; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <UpdateSlotDisplay>b__0(ItemData* id);  // RVA: 0x4BC400
};

// Namespace: <global>
class <>c__DisplayClass48_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* slot; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    <>c__DisplayClass48_0* CS$<>8__locals1; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <UpdateSlotDisplay>b__1();  // RVA: 0x4D3480
};

// Namespace: <global>
class <>c__DisplayClass58_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <PopulateSlotPanelItems>b__0(ItemData* id);  // RVA: 0x4BC400
    bool <PopulateSlotPanelItems>b__1(ItemData* id);  // RVA: 0x4D3260
};

// Namespace: <global>
class <>c__DisplayClass61_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    EquipScreenUI* <>4__this; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* slot; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <CreateItemCard>b__0(ItemData* id);  // RVA: 0x4BC400
    bool <CreateItemCard>b__1(ItemData* id);  // RVA: 0x4D3260
    void <CreateItemCard>b__2(ItemInstance* _);  // RVA: 0x4D34E0
};

// Namespace: <global>
class <>c__DisplayClass61_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool equippedHereAtBuild; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* itemCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ItemCardUI* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass61_0* CS$<>8__locals1; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateItemCard>b__3();  // RVA: 0x4D3640
};

// Namespace: <global>
class <>c__DisplayClass88_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetSynergyBonusDescriptions>b__0(ItemInstance* it);  // RVA: 0x4D3430
    bool <GetSynergyBonusDescriptions>b__1(ItemData* it);  // RVA: 0x4D3450
};

// Namespace: <global>
class <RefreshEquipTextsNextFrame>d__36
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EquipScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4D2FB0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D3130
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class EquipScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static String[][] SlotKeys;
        // static Vector2[][] SlotPositions;
        // static String[][] StatLabelNames;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject[][] slotObjects; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text[][] statLabels; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Toggle* statsAllocationToggle; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        StatsAllocationUI* statsAllocationUI; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* statsAllocationNewBadge; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* statsOverlay; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* itemPanelRoot; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Transform* itemPanelContent; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        ScrollRect* itemPanelScroll; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        GameObject* slotButtonPrefab; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        GameObject* itemCardPrefab; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Button* backButton; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* inventoryButton; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        TMP_Text* panelTitle; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Button* closeButton; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Button* unequipButton; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        TMP_Dropdown* rarityFilterDropdown; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        TMP_Dropdown* elementFilterDropdown; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        float dropdownTemplatePadding; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        System.Nullable<AutoBattle.Data.Rarity> currentRarityFilter; // 0x00B4
        uint8_t pad_00B5[0x7]; // 0x00B5
        System.Nullable<AutoBattle.Data.ElementCategory> currentElementFilter; // 0x00BC
        uint8_t pad_00BD[0x7]; // 0x00BD
        bool filtersWired; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        Transform* synergyParent; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        GameObject* synergyIconPrefab; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Image* equipPlayerSpriteImage; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        SpriteAnimator* equipPlayerAnimator; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        EquipOverlayController* equipOverlay; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Il2CppString* selectedSlot; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        ItemCardUI* currentSelectedCard; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        SlotButtonUI* currentSelectedSlot; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> cachedSynergies; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        System.Collections.Generic.HashSet<System.String> cachedSlotsWithCrossSynergy; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        System.Collections.Generic.List<AutoBattle.UI.EquipScreenUI.CrossSynergyEntryData> cachedCrossSynergyEntries; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        int32_t statsOverlayAcknowledgedPoints; // 0x0120
        uint8_t pad_0121[0x3]; // 0x0121
        int32_t previewHpPts; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        int32_t previewAtkPts; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        int32_t previewDefPts; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        int32_t previewCritPts; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        int32_t previewParryPts; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        bool parryTooltipAttached; // 0x0138
        bool critTooltipAttached; // 0x0139
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4C5D60
        static Il2CppString* GetSlotDisplayName(Il2CppString* slotKey);  // RVA: 0x4C1190
        bool HasNewItemForSlot(Il2CppString* slotName);  // RVA: 0x4C1F50
        void Start();  // RVA: 0x4C5790
        void OnEnable();  // RVA: 0x4C2C00
        void HandleLanguageChanged();  // RVA: 0x4C1ED0
        IEnumerator* RefreshEquipTextsNextFrame();  // RVA: 0x4C4490
        void OnDisable();  // RVA: 0x4C29A0
        void RefreshEquip();  // RVA: 0x4C4500
        void RefreshSlot(GameObject* slotObj, Il2CppString* slotName);  // RVA: 0x4C4770
        void DetectActiveCrossSynergies();  // RVA: 0x4BE380
        static ElementCategory ParseElementName(Il2CppString* name);  // RVA: 0x4C3670
        void UpdateSlotDisplay(GameObject* slotObj, Il2CppString* slotName);  // RVA: 0x4C5FE0
        Il2CppString* GetCategoryIcon(ElementCategory cat);  // RVA: 0x4C0DB0
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x4C5340
        void InitEquipPlayerSprite();  // RVA: 0x4C2280
        void OnSlotClicked(Il2CppString* slotName);  // RVA: 0x4C2F00
        void OpenSlotPanel(Il2CppString* slot);  // RVA: 0x4C3420
        void ApplyFilterDropdownLocalization();  // RVA: 0x4BC8C0
        void EnsureFilterDropdownsWired();  // RVA: 0x4C03D0
        void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4C4C60
        void EnsureDropdownScrollbar(TMP_Dropdown* dropdown);  // RVA: 0x4BFC90
        void PopulateSlotPanelItems();  // RVA: 0x4C3790
        void PositionItemPanelOutside();  // RVA: 0x4C4010
        void SetItemPanelActive(bool active);  // RVA: 0x4C5410
        void CreateItemCard(ItemInstance* itemInstance, Il2CppString* slot);  // RVA: 0x4BDE20
        void RefreshAllSlotMarkers();  // RVA: 0x4C4330
        void OnItemSelected(ItemInstance* itemInstance, Il2CppString* slot, ItemCardUI* cardUI);  // RVA: 0x4C2E10
        void ClosePanel();  // RVA: 0x4BD5D0
        void EnsureStatLabels();  // RVA: 0x4C09F0
        void UpdateStatDisplay();  // RVA: 0x4C64E0
        static Il2CppString* WrapPreview(Il2CppString* value, bool active);  // RVA: 0x4C7AC0
        void SetStatLabel(int32_t index, Il2CppString* label, Il2CppString* value);  // RVA: 0x4C54A0
        void OnStatsAllocationToggled(bool isOn);  // RVA: 0x4C3120
        void RefreshStatsAllocationDot();  // RVA: 0x4C4AE0
        void ApplyAllocationPreview(int32_t hpPts, int32_t atkPts, int32_t defPts, int32_t critPts, int32_t parryPts);  // RVA: 0x4BC890
        void EnsureCritTooltip();  // RVA: 0x4BFAD0
        void EnsureParryTooltip();  // RVA: 0x4C0830
        void UpdateSynergyDisplay();  // RVA: 0x4C70A0
        void BuildCrossSynergyEntries();  // RVA: 0x4BD140
        void CreateCrossSynergyEntry(CrossSynergyEntryData entry, int32_t idx);  // RVA: 0x4BD6E0
        static Il2CppString* GetItemCategoryHex(ElementCategory cat);  // RVA: 0x4C0FF0
        void UpdateSynergyRow(Transform* row, Il2CppString* element, int32_t count);  // RVA: 0x4C74E0
        Il2CppString* GetSynergyBonusDescriptions(Il2CppString* element, int32_t count);  // RVA: 0x4C1490
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4C10C0
        Color GetElementColor(Il2CppString* element);  // RVA: 0x4C0E80
        EquipSlot SlotNameToEnum(Il2CppString* slotName);  // RVA: 0x4C5600
        void OnUnequipClicked();  // RVA: 0x4C3310
        void OnBackClicked();  // RVA: 0x4C2940
        void OnInventoryClicked();  // RVA: 0x4C2DB0
        void .ctor();  // RVA: 0x4C7F10
        static void .cctor();  // RVA: 0x4C7B30
        void <Start>b__33_0();  // RVA: 0x4C5FD0
        void <EnsureFilterDropdownsWired>b__55_0(int32_t idx);  // RVA: 0x4C5DC0
        void <EnsureFilterDropdownsWired>b__55_1(int32_t idx);  // RVA: 0x4C5E70
    };

    // Namespace: AutoBattle.UI
    class EquipSlotTooltip : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* slotDisplayName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* itemLine; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* runtimePanel; // 0x0030
    
        // Methods
        void Setup(Il2CppString* displayName, Il2CppString* itemInfo);  // RVA: 0x4C9690
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4C94C0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4C94B0
        void OnDisable();  // RVA: 0x4C94B0
        void Hide();  // RVA: 0x4C93B0
        GameObject* CreateRuntimePanel(Il2CppString* text);  // RVA: 0x4C8A90
        void .ctor();  // RVA: 0x4C96D0
    };

    // Namespace: AutoBattle.UI
    class EquipSlotTooltipPanel : public MonoBehaviour
    {
    public:
        // Static fields
        // static EquipSlotTooltipPanel* _instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* panelRect; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* tooltipText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* slotNameBG; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* slotNameText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float padding; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float gap; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float maxWidth; // 0x0048
    
        // Methods
        static EquipSlotTooltipPanel* get_Instance();  // RVA: 0x4C88D0
        void Awake();  // RVA: 0x4C8070
        void OnDestroy();  // RVA: 0x4C82B0
        void Show(Il2CppString* text, RectTransform* anchorRect);  // RVA: 0x4C8360
        void Show(Il2CppString* header, Il2CppString* text, RectTransform* anchorRect);  // RVA: 0x4C8380
        void Hide();  // RVA: 0x4A81E0
        static Canvas* GetRootCanvas(Component* c);  // RVA: 0x4C8150
        void .ctor();  // RVA: 0x4C88B0
    };

    // Namespace: AutoBattle.UI
    class ForestBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* alberiSpritea; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* nebbiaSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] birdFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float pixelScale; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool applyPixelScaleToBackground; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float birdFrameRate; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float birdFlySpeed; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float birdBobAmplitude; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float birdBobPeriod; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float birdBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float birdRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float birdRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float birdYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float fogScrollSpeed; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        Color fogTint; // 0x006C
        uint8_t pad_006D[0xF]; // 0x006D
        float fogYOffset; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        RectTransform* bgLayer; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        RectTransform* birdLayer; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        RectTransform* alberiLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* fogContainerRT; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* fogART; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* fogBRT; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* rect; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* birdImage; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        int32_t birdFrame; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        float birdTimer; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        float birdX; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float birdCurrentBaseY; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float birdPhase; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float birdRespawnTimer; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        bool birdActive; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        float birdHalfWidth; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float fogTileWidth; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        bool built; // 0x00E4
    
        // Methods
        void Awake();  // RVA: 0x4C9740
        void OnEnable();  // RVA: 0x4CA500
        void Build();  // RVA: 0x4C97A0
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4CA320
        RectTransform* CreateFogTile(Il2CppString* name, Transform* parent, Vector2 size, float xOffset);  // RVA: 0x4CA1A0
        void Update();  // RVA: 0x4CA760
        void SetSprites(Sprite* bg, Sprite* alberi, Sprite* nebbia, Sprite[][] bird);  // RVA: 0x4CA6F0
        void .ctor();  // RVA: 0x4CAE20
    };

    // Namespace: AutoBattle.UI
    class ForgeRowHover : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool interactive; // 0x0028
    
        // Methods
        void SetTargetImage(Image* image);  // RVA: 0x4CB0A0
        void SetInteractive(bool value);  // RVA: 0x4CB010
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4CAF00
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4CAF90
        void OnDisable();  // RVA: 0x4CAE80
        void .ctor();  // RVA: 0x4CB130
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass36_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ForgeScreenUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Rarity srcCopy; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    Rarity tgtCopy; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t neededCopy; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <WireForgeRow>b__0();  // RVA: 0x4D31A0
};

// Namespace: <global>
class <>c__DisplayClass37_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* featureName; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <EnsureDemoLockOverlay>b__0();  // RVA: 0x4D31E0
};

// Namespace: <global>
class <>c__DisplayClass40_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <PopulateForgeItems>b__0(ItemData* id);  // RVA: 0x4BC400
    bool <PopulateForgeItems>b__1(ItemData* id);  // RVA: 0x4D3260
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ForgeScreenUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instanceCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t neededCopy; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateForgeItemCard>b__0();  // RVA: 0x4D3290
};

// Namespace: <global>
class <>c__DisplayClass49_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* newItem; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <ShowForgeResultPopup>b__0(ItemData* id);  // RVA: 0x4BC400
    bool <ShowForgeResultPopup>b__1(ItemData* id);  // RVA: 0x4D3260
};

// Namespace: <global>
class <AutoHideForgeResultPopup>d__52
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float delay; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ForgeScreenUI* <>4__this; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4D2BF0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D2CB0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PlayForgeAnimImage>d__54
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ForgeScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4D2CF0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D2EC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PositionActionPanelDeferred>d__32
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    ForgeScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4D2F00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4D2F70
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ForgeScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static ValueTuple`4[][] forgeOptions;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* actionPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* cover; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* coverSecondary; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* forgeRarityPanel; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Transform* forgeScrollContent; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* itemCardPrefab; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Dropdown* slotDropdown; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Dropdown* elementDropdown; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* counterText; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* backButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Toggle* selAllToggle; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        GameObject* selAllRedDotOn; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* forgeExecuteButton; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* forgeResultPopupRoot; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Image* forgeAnimImage; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Sprite[][] forgeAnimFrames; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float forgeAnimFps; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        SidePanelController* sidePanel; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        bool isOpen; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        Rarity forgeSourceRarity; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        Rarity forgeTargetRarity; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        int32_t forgeNeededCount; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        Il2CppString* currentSlotFilter; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Il2CppString* currentElementFilter; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> forgeSelectedItems; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        System.Collections.Generic.Dictionary<AutoBattle.Data.ItemInstance,UnityEngine.GameObject> forgeCardMap; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        GameObject* forgeResultPopup; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Coroutine* forgeResultPopupRoutine; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Coroutine* forgeAnimCoroutine; // 0x00F0
    
        // Methods
        bool get_IsOpen();  // RVA: 0x4D1750
        void Awake();  // RVA: 0x4CB9F0
        void Open();  // RVA: 0x4CE740
        void Close();  // RVA: 0x4CBBD0
        IEnumerator* PositionActionPanelDeferred();  // RVA: 0x4CF090
        void PositionActionPanel();  // RVA: 0x4CF100
        void PositionCover();  // RVA: 0x4B4660
        void ShowForgeRarityPanel();  // RVA: 0x4CF520
        void WireForgeRow(GameObject* rowGO, Rarity sourceRarity, Rarity targetRarity, Il2CppString* label, int32_t needed);  // RVA: 0x4D0C80
        void EnsureDemoLockOverlay(GameObject* target, bool show, Il2CppString* analyticsFeatureName);  // RVA: 0x4CC2E0
        void EnsureLockOverlay(GameObject* target, bool show);  // RVA: 0x4CCA90
        void OnForgeRaritySelected(Rarity sourceRarity, Rarity targetRarity, int32_t needed);  // RVA: 0x4CE0B0
        void PopulateForgeItems();  // RVA: 0x4CEBE0
        void CreateForgeItemCard(ItemData* itemData, ItemInstance* itemInstance);  // RVA: 0x4CBF80
        void ToggleForgeItemSelection(ItemInstance* item, GameObject* cardObj, int32_t needed);  // RVA: 0x4D0400
        void OnBackClicked();  // RVA: 0x4CD8B0
        void OnSelAllToggled(bool isOn);  // RVA: 0x4CE2D0
        void OnForgeExecute();  // RVA: 0x4CDB30
        void ShowForgeResultPopup(ItemInstance* newItem);  // RVA: 0x4CFA60
        static void HideClickToDismissHint(GameObject* popup);  // RVA: 0x4CD410
        void AutoSizePopup();  // RVA: 0x4CB6E0
        IEnumerator* AutoHideForgeResultPopup(float delay);  // RVA: 0x4CB660
        void HideForgeResultPopup();  // RVA: 0x4CD5E0
        IEnumerator* PlayForgeAnimImage();  // RVA: 0x4CEB70
        void SetCoversActive(bool active);  // RVA: 0x4CF450
        Color GetRarityTextColor(Rarity rarity);  // RVA: 0x4CD390
        void WireFilterDropdowns();  // RVA: 0x4D0A40
        void ApplyForgeFilterLocalization();  // RVA: 0x4CB140
        void OnFilterChanged();  // RVA: 0x4CDB10
        void ResetFilters();  // RVA: 0x4CF340
        static bool MatchesSlotFilter(EquipSlot slot, Il2CppString* filter);  // RVA: 0x4CD750
        void UpdateCounter();  // RVA: 0x4D07D0
        void UpdateForgeExecuteButton();  // RVA: 0x4D09A0
        void ClearForgeItems();  // RVA: 0x4CBB60
        void ClearForgeCards();  // RVA: 0x4CBA40
        static int32_t CountUnequippedByRarity(Rarity rarity);  // RVA: 0x4CBDE0
        static Transform* FindChildByName(Transform* root, Il2CppString* childName);  // RVA: 0x4CD160
        static TMP_Text* FindChildTMP(Transform* root, Il2CppString* childName);  // RVA: 0x4CD2C0
        void Toggle();  // RVA: 0x4D05A0
        void .ctor();  // RVA: 0x4D1620
        static void .cctor();  // RVA: 0x4D13B0
        void <WireFilterDropdowns>b__57_0(int32_t idx);  // RVA: 0x4D05C0
        void <WireFilterDropdowns>b__57_1(int32_t idx);  // RVA: 0x4D06E0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <RepositionAfterMonitorSwitch>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameFrameDragger* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PointerEventData* eventData; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Vector2 direction; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Vector2 <pointerScreen>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Camera* <pressCam>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <i>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4EC3C0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC830
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class GameFrameDragger : public MonoBehaviour
    {
    public:
        // Static fields
        // static float SWITCH_COOLDOWN_SECONDS;
        // static int32_t TRANSITION_FRAMES;
        // static float EDGE_PUSH_THRESHOLD;
        // static float CORNER_SNAP_THRESHOLD;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* frameRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool rightButtonOnly; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        RectTransform* canvasRect; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Vector2 pointerStartLocal; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Vector2 frameStartAnchored; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool dragging; // 0x0048
        bool switchedThisDrag; // 0x0049
        uint8_t pad_004A[0x2]; // 0x004A
        float switchCooldownUntil; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        bool isTransitioning; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float edgePushAccumulator; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        Vector2 lastEdgeDirection; // 0x0058
    
        // Methods
        void Awake();  // RVA: 0x4D1760
        RectTransform* ResolveFrameRoot();  // RVA: 0x4D2540
        RectTransform* ResolveCanvasRect();  // RVA: 0x4D2440
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x4D2140
        void OnDrag(PointerEventData* eventData);  // RVA: 0x4D1AB0
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x4D2310
        void TrySnapToNearestCorner();  // RVA: 0x4D2750
        Vector2 GetEdgeDirection(RectTransform* fr, RectTransform* cr, float margin);  // RVA: 0x4D18C0
        IEnumerator* RepositionAfterMonitorSwitch(Vector2 direction, PointerEventData* eventData);  // RVA: 0x4D2390
        void .ctor();  // RVA: 0x4D2B90
    };

    // Namespace: AutoBattle.UI
    class GraveyardBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSottoSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* backgroundSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] batFrames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] spiderFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float pixelScale; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool applyPixelScaleToBackground; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float batFrameRate; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float batFlySpeed; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        float batBobAmplitude; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float batBobPeriod; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float batBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float batRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float batRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float batYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float spiderFrameRate; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool spiderStatic; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        Vector2 spiderFixedPosition; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        float spiderWalkSpeed; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float spiderBaseY; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        float spiderRespawnMin; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float spiderRespawnMax; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float spiderYJitter; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        bool spiderWalksRight; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        RectTransform* bgSottoLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* batLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* bgLayer; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* spiderLayer; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* rect; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Image* batImage; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        int32_t batFrameIdx; // 0x00C0
        uint8_t pad_00C1[0x3]; // 0x00C1
        float batTimer; // 0x00C4
        uint8_t pad_00C5[0x3]; // 0x00C5
        float batX; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float batCurrentBaseY; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float batPhase; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float batRespawnTimer; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        bool batActive; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        float batHalfWidth; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        Image* spiderImage; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        int32_t spiderFrameIdx; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float spiderTimer; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float spiderX; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float spiderCurrentBaseY; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float spiderRespawnTimer; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool spiderActive; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float spiderHalfWidth; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        bool built; // 0x0104
    
        // Methods
        void Awake();  // RVA: 0x4D39A0
        void OnEnable();  // RVA: 0x4D4660
        void Build();  // RVA: 0x4D3A00
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4D4480
        void Update();  // RVA: 0x4D4680
        void SetSprites(Sprite* bgSotto, Sprite* bg, Sprite[][] bat, Sprite[][] spider);  // RVA: 0x4CA6F0
        void .ctor();  // RVA: 0x4D4E40
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<System.String> <>9__66_5;
    // static System.Func<System.String> <>9__66_6;
    // static System.Func<System.String> <>9__66_7;
    // static System.Func<System.String> <>9__66_8;
    // static System.Func<System.String> <>9__66_0;
    // static System.Func<System.String> <>9__66_1;
    // static System.Func<System.String> <>9__66_2;
    // static UnityAction* <>9__66_3;
    // static System.Func<System.String> <>9__66_4;
    // static System.Func<System.String> <>9__67_0;
    // static System.Func<System.String> <>9__68_0;
    // static System.Func<System.String> <>9__71_0;
    // static System.Func<System.String> <>9__72_0;


    // Methods
    static void .cctor();  // RVA: 0x4ED830
    void .ctor();  // RVA: 0x4BC430
    Il2CppString* <Start>b__66_5();  // RVA: 0x4ED300
    Il2CppString* <Start>b__66_6();  // RVA: 0x4ED500
    Il2CppString* <Start>b__66_7();  // RVA: 0x4ED5A0
    Il2CppString* <Start>b__66_8();  // RVA: 0x4ED640
    Il2CppString* <Start>b__66_0();  // RVA: 0x4ED080
    Il2CppString* <Start>b__66_1();  // RVA: 0x4ED120
    Il2CppString* <Start>b__66_2();  // RVA: 0x4ED1C0
    void <Start>b__66_3();  // RVA: 0x4B4660
    Il2CppString* <Start>b__66_4();  // RVA: 0x4ED260
    Il2CppString* <AttachHomePwrTooltip>b__67_0();  // RVA: 0x4ECB10
    Il2CppString* <AttachHomeRankTooltip>b__68_0();  // RVA: 0x4ECBB0
    Il2CppString* <AttachHomeHpTooltip>b__71_0();  // RVA: 0x4EC870
    Il2CppString* <AttachHomeXpTooltip>b__72_0();  // RVA: 0x4ECDC0
};

// Namespace: <global>
class <PlayBattleIconAnim>d__78
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    HomeScreenUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4EBF60
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC0C0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <RefreshHomeNextFrame>d__81
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    HomeScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4EC260
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC380
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class HomeScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Rarity[][] forgeSourceRarities;
        // static int32_t FORGE_NEEDED;
    
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* steamNameText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* nameText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* levelText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* xpLabel; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* psValueText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* sectorLabel; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Text* staminaLabel; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Text* hpLabel; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* battleTimeLabel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Image* xpBarFill; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Image* staminaBarFill; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Image* hpBarFill; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        AnimatedHPBar* homeAnimatedHpBar; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Image* homePlayerSpriteImage; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        SpriteAnimator* homePlayerAnimator; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        EquipOverlayController* homeOverlay; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* outskirtsBackground; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* villageBackground; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        GameObject* graveyardBackground; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        GameObject* forestBackground; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        GameObject* restBackground; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        GameObject* avatarPlaceholder; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Button* equipButton; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        GameObject* equipDropsBadge; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Button* inventoryButton; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        GameObject* inventoryDropsBadge; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Button* forgeButton; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        GameObject* forgeDropsBadge; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        Button* battleButton; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Button* resetButton; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        ForgeScreenUI* forgeScreenUI; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        GameObject* equipSelectedOverlay; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        GameObject* inventorySelectedOverlay; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        GameObject* forgeSelectedOverlay; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        HoverSlideButton* equipHoverSlide; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        HoverSlideButton* inventoryHoverSlide; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        HoverSlideButton* forgeHoverSlide; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Image* battleButtonFillOverlay; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        Image* battleButtonIcon; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        Sprite[][] battleButtonIconFrames; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        float battleButtonIconFps; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        Coroutine* battleIconCoroutine; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        Button* homeSettingsToggleButton; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Sprite* homeSettingsOpenSprite; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Sprite* homeSettingsClosedSprite; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        GameObject* homeSettingsBar; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        Button* homeSettingsQuitButton; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Button* homeSettingsOptionsButton; // 0x0198
        uint8_t pad_0199[0x7]; // 0x0199
        Button* homeSettingsStatsButton; // 0x01A0
        uint8_t pad_01A1[0x7]; // 0x01A1
        Button* homeSettingsScaleButton; // 0x01A8
        uint8_t pad_01A9[0x7]; // 0x01A9
        GameObject* settingsPanel; // 0x01B0
        uint8_t pad_01B1[0x7]; // 0x01B1
        bool homeSettingsBarOpen; // 0x01B8
        uint8_t pad_01B9[0x7]; // 0x01B9
        TMP_Text* battleButtonText; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        TMP_Text* playFabStatusText; // 0x01C8
        uint8_t pad_01C9[0x7]; // 0x01C9
        TMP_Text* rpTierText; // 0x01D0
        uint8_t pad_01D1[0x7]; // 0x01D1
        TMP_Text* rpValueText; // 0x01D8
        uint8_t pad_01D9[0x7]; // 0x01D9
        LeaderboardUI* leaderboardUI; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool isBattleActive; // 0x01E8
        uint8_t pad_01E9[0x3]; // 0x01E9
        float pfStatusTimer; // 0x01EC
        uint8_t pad_01ED[0x3]; // 0x01ED
        bool subscribedToRanking; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        System.Collections.Generic.Dictionary<AutoBattle.Data.Rarity,System.Int32> forgeBadgeSnapshot; // 0x01F8
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4DA790
        static Il2CppString* T(Il2CppString* key, Object[][] args);  // RVA: 0x4DA720
        void Update();  // RVA: 0x4DBD60
        void Start();  // RVA: 0x4D94A0
        void AttachHomePwrTooltip();  // RVA: 0x4D5220
        void AttachHomeRankTooltip();  // RVA: 0x4D5370
        static void AttachTooltipOnTextAndSibling(TMP_Text* valueText, Il2CppString* siblingName, System.Func<System.String> textProvider);  // RVA: 0x4D5830
        static void AttachTextProviderTooltip(GameObject* host, System.Func<System.String> textProvider);  // RVA: 0x4D56D0
        void AttachHomeHpTooltip();  // RVA: 0x4D5010
        void AttachHomeXpTooltip();  // RVA: 0x4D54C0
        void OnDestroy();  // RVA: 0x4D67E0
        void OnEnable();  // RVA: 0x4D6C30
        void OnDisable();  // RVA: 0x4D6870
        void StartBattleIconAnim();  // RVA: 0x4D9380
        void StopBattleIconAnim();  // RVA: 0x4DA6D0
        IEnumerator* PlayBattleIconAnim();  // RVA: 0x4D7A70
        void HandleEquipmentChanged();  // RVA: 0x4D5C60
        void HandleLanguageChanged();  // RVA: 0x4D6000
        IEnumerator* RefreshHomeNextFrame();  // RVA: 0x4D7AE0
        void RefreshHome();  // RVA: 0x4D7B50
        void UpdateBattleButtonUI();  // RVA: 0x4DABB0
        static void OverwriteSiblingLabel(TMP_Text* valueText, Il2CppString* siblingName, Il2CppString* newLabel);  // RVA: 0x4D78D0
        void UpdateRankLabel();  // RVA: 0x4DB3B0
        void UpdatePlayFabStatus();  // RVA: 0x4DAD90
        void OnEquipClicked();  // RVA: 0x4D7030
        void OnInventoryClicked();  // RVA: 0x4D7540
        void OnForgeClicked();  // RVA: 0x4D71A0
        void SnapshotForgeThresholds();  // RVA: 0x4D91F0
        void OnBattleClicked();  // RVA: 0x4D6750
        void OnResetClicked();  // RVA: 0x4D7880
        void OnQuitClicked();  // RVA: 0x4D7790
        void OnLeaderboardClicked();  // RVA: 0x4D76B0
        static void AddTooltipToButton(Button* btn, System.Func<System.String> textProvider, Side side);  // RVA: 0x4D4EE0
        void ToggleHomeSettingsBar();  // RVA: 0x4DA7F0
        void UpdateHomeToggleIcon();  // RVA: 0x4DACB0
        void ToggleSettingsPanel();  // RVA: 0x4DA950
        void HandleBattleStateChange(bool isActive);  // RVA: 0x4D5C50
        void HandleRPChanged(int32_t rp, int32_t delta, RankTier tier);  // RVA: 0x4D6080
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x4D5A00
        static Il2CppString* ResolveCharacterIdleResourceSuffix(CharacterType c);  // RVA: 0x4D8E60
        void InitHomePlayerSprite();  // RVA: 0x4D6090
        void SetBarFill(Image* fillImage, float value);  // RVA: 0x4D8F30
        void SetButtonOverlays(bool equip, bool inventory, bool forge);  // RVA: 0x4D8FF0
        void UpdateSectorBackground();  // RVA: 0x4DB790
        void .ctor();  // RVA: 0x4DC480
        static void .cctor();  // RVA: 0x4DC3F0
        void <ToggleSettingsPanel>b__98_0();  // RVA: 0x4DAB30
    };

    // Namespace: AutoBattle.UI
    class HoverSlideButton : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* buttonImage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        RectTransform* iconTransform; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* iconImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        RectTransform* badgeTransform; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Vector2 badgeIdlePos; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Vector2 badgeVisiblePos; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AnimationCurve* badgeEasingCurve; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        float badgeAnimationDuration; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float idleOffsetX; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float visibleOffsetX; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float animationDuration; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float progress; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float badgeProgress; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        bool isHovered; // 0x0078
        bool isSelected; // 0x0079
        bool isInitialized; // 0x007A
    
        // Methods
        void Awake();  // RVA: 0x4DC8D0
        void OnEnable();  // RVA: 0x4DC950
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4DC960
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4DC970
        void SetSelected(bool selected);  // RVA: 0x4DC980
        void Update();  // RVA: 0x4DC990
        void ApplyState();  // RVA: 0x4DC510
        void .ctor();  // RVA: 0x4DCB70
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct ItemRarity
{
public:
    // Static fields
    // static ItemRarity All;
    // static ItemRarity Common;
    // static ItemRarity Rare;
    // static ItemRarity Epic;
    // static ItemRarity Legendary;
    // static ItemRarity Mythic;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<AutoBattle.Data.ItemInstance> <>9__41_0;


    // Methods
    static void .cctor();  // RVA: 0x4ED7C0
    void .ctor();  // RVA: 0x4BC430
    int32_t <RefreshItemGrid>b__41_0(ItemInstance* a, ItemInstance* b);  // RVA: 0x4ED050
};

// Namespace: <global>
class <>c__DisplayClass38_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Int32> onChanged; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateFilterDropdown>b__0(int32_t idx);  // RVA: 0x4ED6E0
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <RefreshItemGrid>b__1(ItemData* id);  // RVA: 0x4BC400
    bool <RefreshItemGrid>b__2(ItemData* id);  // RVA: 0x4D3260
};

// Namespace: <global>
class <>c__DisplayClass44_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* itemInstance; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    InventoryScreenUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <CreateItemCard>b__0(ItemData* id);  // RVA: 0x4BC400
    bool <CreateItemCard>b__1(ItemData* id);  // RVA: 0x4D3260
};

// Namespace: <global>
class <>c__DisplayClass44_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemData* itemDataCopy; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instanceCopy; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameObject* cardRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass44_0* CS$<>8__locals1; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateItemCard>b__2();  // RVA: 0x4ED700
};

// Namespace: <global>
class <>c__DisplayClass50_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* featureName; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <EnsureDemoLockOverlay>b__0();  // RVA: 0x4ED740
};

// Namespace: <global>
class <PositionActionPanelDeferred>d__31
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InventoryScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4EC100
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC170
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <ReapplyDropdownLocalizationNextFrame>d__30
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    InventoryScreenUI* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4EC1B0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EC220
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class InventoryScreenUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static Color dropdownBgColor;
        // static Color dropdownItemColor;
        // static Color dropdownHighlightColor;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Transform* filterParent; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* filterButtonPrefab; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Transform* gridParent; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* itemCardPrefab; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* backButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Button* equipButton; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        ScrollRect* itemScrollRect; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float dropdownTemplatePadding; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        GameObject* actionPanel; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* actionEquipButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Button* sellButton; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        ItemData* selectedItem; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        ItemInstance* selectedInstance; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* selectedCardObj; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        GameObject* floatingButtonsPanel; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        ItemRarity currentRarityFilter; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Il2CppString* currentElementFilter; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        Il2CppString* currentSlotFilter; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        TMP_Dropdown* rarityDropdown; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        TMP_Dropdown* slotDropdown; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        TMP_Dropdown* elementDropdown; // 0x00C0
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x4E54E0
        void Start();  // RVA: 0x4E5270
        void EnsureScrollMaskConfigured();  // RVA: 0x4E1D80
        void OnEnable();  // RVA: 0x4E3050
        void HandleLanguageChanged();  // RVA: 0x4E2540
        IEnumerator* ReapplyDropdownLocalizationNextFrame();  // RVA: 0x4E34E0
        IEnumerator* PositionActionPanelDeferred();  // RVA: 0x4E3230
        void PositionActionPanel();  // RVA: 0x4E32A0
        void OnDisable();  // RVA: 0x4E2D50
        void RefreshInventory();  // RVA: 0x4E3830
        void ApplyDropdownLocalization();  // RVA: 0x4DCBD0
        void WireDropdownCallbacks();  // RVA: 0x4E59D0
        void CreateFilterButtons();  // RVA: 0x4DD8D0
        TMP_Dropdown* CreateFilterDropdown(Il2CppString* name, Transform* parent, System.Collections.Generic.List<System.String> options, int32_t defaultIndex, System.Action<System.Int32> onChanged);  // RVA: 0x4DEC90
        void EnsureDropdownScrollbar(TMP_Dropdown* dropdown);  // RVA: 0x4E1640
        void ResizeDropdownTemplateToFitOptions(TMP_Dropdown* dropdown);  // RVA: 0x4E48D0
        void RefreshItemGrid();  // RVA: 0x4E3FE0
        bool MatchesRarityFilter(Rarity rarityEnum, ItemRarity filter);  // RVA: 0x4E2660
        bool MatchesSlotFilter(EquipSlot slot, Il2CppString* filter);  // RVA: 0x4E26B0
        void CreateItemCard(ItemInstance* itemInstance);  // RVA: 0x4E0980
        void SelectItem(ItemData* item, ItemInstance* instance, GameObject* cardObj);  // RVA: 0x4E4FB0
        void ApplySelectionHighlight(GameObject* cardObj);  // RVA: 0x4DD810
        void RemoveSelectionHighlight(GameObject* cardObj);  // RVA: 0x4E4810
        void HideFloatingButtons();  // RVA: 0x4E25C0
        void RefreshActionButtons();  // RVA: 0x4E3550
        void EnsureDemoLockOverlay(GameObject* target, bool show, Il2CppString* analyticsFeatureName);  // RVA: 0x4E0EB0
        void RefreshGridOnly();  // RVA: 0x4E37C0
        void OnActionEquipClicked();  // RVA: 0x4E2810
        void OnActionSellClicked();  // RVA: 0x4E2BB0
        Il2CppString* GetFirstCompatibleSlot(EquipSlot slot);  // RVA: 0x4E2020
        Il2CppString* GetSlotDisplayName(EquipSlot slot);  // RVA: 0x4E2370
        void OnBackClicked();  // RVA: 0x4E2D00
        void OnEquipClicked();  // RVA: 0x4E31E0
        Il2CppString* GetCategoryIcon(ElementCategory cat);  // RVA: 0x4E1F50
        Color GetRarityColor(Rarity rarity);  // RVA: 0x4E2220
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4E22A0
        Color GetRarityTextColor(Rarity rarity);  // RVA: 0x4CD390
        void .ctor();  // RVA: 0x4E5CC0
        static void .cctor();  // RVA: 0x4E5C40
        void <WireDropdownCallbacks>b__36_0(int32_t idx);  // RVA: 0x4E5540
        void <WireDropdownCallbacks>b__36_1(int32_t idx);  // RVA: 0x4E57C0
        void <WireDropdownCallbacks>b__36_2(int32_t idx);  // RVA: 0x4E58E0
        void <CreateFilterButtons>b__37_0(int32_t idx);  // RVA: 0x4E5540
        void <CreateFilterButtons>b__37_1(int32_t idx);  // RVA: 0x4E55B0
        void <CreateFilterButtons>b__37_2(int32_t idx);  // RVA: 0x4E56D0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimateIcon>d__36
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float fps; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    ItemCardUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <frameIndex>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <delay>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x4EBDB0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x4EBF20
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ItemCardUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* equippedBG; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* icon; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* rarityFrame; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* elementDot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Image* selectionFrame; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* selectedFrame; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* elementFire; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* elementIce; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* elementHoly; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* elementArcane; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* elementShadow; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* rarityFrameSprite; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite* equippedFrameSprite; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Sprite* selectionFrameSprite; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite[][] iconAnimFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        float iconAnimFps; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Coroutine* iconAnimCoroutine; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* newBadge; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        ItemInstance* boundInstance; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        System.Action<AutoBattle.Data.ItemInstance> OnMarkedAsSeen; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        bool suppressMarkAsSeen; // 0x00C0
        bool _isSelected; // 0x00C1
        uint8_t pad_00C2[0x6]; // 0x00C2
        RectTransform* _viewportRect; // 0x00C8
    
        // Methods
        ItemInstance* get_BoundInstance();  // RVA: 0x4E7200
        void add_OnMarkedAsSeen(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x4E7140
        void remove_OnMarkedAsSeen(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x4E7210
        void Setup(ItemData* itemData, ItemInstance* itemInstance, bool isEquipped, bool isSelected);  // RVA: 0x4E6A70
        void HideNewBadge();  // RVA: 0x4E5E80
        void RefreshNewBadge();  // RVA: 0x4E6400
        void MarkAsSeen();  // RVA: 0x4E60F0
        void SetSelected(bool selected);  // RVA: 0x4E66C0
        void LateUpdate();  // RVA: 0x4E5F10
        static bool RectFullyInside(RectTransform* a, RectTransform* b);  // RVA: 0x4E6300
        void SetEquipped(bool equipped, Rarity rarity);  // RVA: 0x4E64A0
        Sprite* GetElementSprite(ElementCategory category);  // RVA: 0x4E5DD0
        IEnumerator* AnimateIcon(float fps);  // RVA: 0x4E5D50
        void OnEnable();  // RVA: 0x4E6220
        void OnDisable();  // RVA: 0x4E61D0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4E60F0
        static Color GetRarityBrightColor(Rarity rarity);  // RVA: 0x4E5E10
        void .ctor();  // RVA: 0x4AEF60
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass29_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equippedCtx; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <ResolveEquippedItemForComparison>b__0(ItemData* t);  // RVA: 0x4BC400
};

// Namespace: <global>
class <>c__DisplayClass29_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* shieldEquipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <ResolveEquippedItemForComparison>b__1(ItemData* t);  // RVA: 0x4BC400
};

// Namespace: <global>
class <>c__DisplayClass29_2
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* equipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <ResolveEquippedItemForComparison>b__2(ItemData* t);  // RVA: 0x4BC400
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class ItemTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static GameObject* activeTooltip;
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_INSIDE_FRACTION;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        ItemData* itemData; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        ItemInstance* itemInstance; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* tooltipPanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* contextSlotKey; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* headerText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool suppressEquippedLabel; // 0x0048
    
        // Methods
        void Setup(ItemData* data, ItemInstance* instance);  // RVA: 0x4EB7D0
        void Setup(ItemData* data, ItemInstance* instance, Il2CppString* explicitSlotKey);  // RVA: 0x4EB830
        void SetHeader(Il2CppString* header);  // RVA: 0x4EB7B0
        void SetSuppressEquippedLabel(bool suppress);  // RVA: 0x4EB7C0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4EAB80
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4EAB70
        void OnDisable();  // RVA: 0x4EAB70
        void HideSelf();  // RVA: 0x4EA970
        GameObject* CreateTooltipPanel();  // RVA: 0x4E8B20
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x4E94F0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x4E72D0
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x4EACA0
        static RectTransform* FindDirectChildOfParent(RectTransform* child, RectTransform* root);  // RVA: 0x4E9310
        Il2CppString* BuildTooltipContent();  // RVA: 0x4E7810
        static Il2CppString* FormatStatLine(Il2CppString* label, float value, float equippedValue, Il2CppString* baseColor, bool showDiff);  // RVA: 0x4E9A10
        static Il2CppString* FormatStatLinePercent(Il2CppString* label, float value, float equippedValue, Il2CppString* baseColor, bool showDiff);  // RVA: 0x4E9640
        bool TryComputePowerScoreDelta(int32_t delta);  // RVA: 0x4EB8A0
        Il2CppString* ResolveSimulationSlotKey(PlayerState* ps);  // RVA: 0x4EB680
        ItemData* ResolveEquippedItemForComparison(EquipSlot slot);  // RVA: 0x4EB1E0
        static String[][] GetSlotKeys(EquipSlot slot);  // RVA: 0x4EA360
        Il2CppString* GetSlotName(EquipSlot slot);  // RVA: 0x4EA570
        Il2CppString* GetRarityName(Rarity rarity);  // RVA: 0x4EA170
        Il2CppString* GetElementName(ElementCategory category);  // RVA: 0x4E9EB0
        Il2CppString* GetRarityHexColor(Rarity rarity);  // RVA: 0x4EA0A0
        Il2CppString* GetElementHexColor(ElementCategory category);  // RVA: 0x4E9DE0
        static void HideActiveTooltip();  // RVA: 0x4EA7B0
        void .ctor();  // RVA: 0x4AEF60
        bool <TryComputePowerScoreDelta>b__27_0(ItemInstance* it);  // RVA: 0x4EBD80
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct LeaderboardTab
{
public:
    // Static fields
    // static LeaderboardTab Global;
    // static LeaderboardTab Friends;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<TMPro.TMP_Text> <>9__45_0;
    // static System.Comparison<AutoBattle.Steam.LeaderboardEntry> <>9__55_0;


    // Methods
    static void .cctor();  // RVA: 0x502FF0
    void .ctor();  // RVA: 0x4BC430
    int32_t <WireSceneAuthored>b__45_0(TMP_Text* a, TMP_Text* b);  // RVA: 0x502EA0
    int32_t <FetchFriendsLeaderboard>b__55_0(LeaderboardEntry* a, LeaderboardEntry* b);  // RVA: 0x502E70
};

// Namespace: <global>
class <>c__DisplayClass49_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardEntry[][] topEntries; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    LeaderboardEntry[][] aroundEntries; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    int32_t myPosition; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <RefreshCoroutine>b__0(LeaderboardEntry[][] top, LeaderboardEntry[][] around, int32_t pos);  // RVA: 0x502F70
    void <RefreshCoroutine>b__1(LeaderboardEntry[][] entries);  // RVA: 0x502FC0
};

// Namespace: <global>
class <>c__DisplayClass53_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <RefreshTabButton>b__0();  // RVA: 0x502FD0
};

// Namespace: <global>
class <>c__DisplayClass54_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateTabButton>b__0();  // RVA: 0x502FD0
};

// Namespace: <global>
class <>c__DisplayClass55_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.String> steamToPlayFab; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchFriendsLeaderboard>b__1(System.Collections.Generic.Dictionary<System.String,System.String> m);  // RVA: 0x502FC0
};

// Namespace: <global>
class <>c__DisplayClass55_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchFriendsLeaderboard>b__2(bool ok, Il2CppString* resp);  // RVA: 0x502F40
};

// Namespace: <global>
class <FetchFriendsLeaderboard>d__55
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass55_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass55_1* <>8__2; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<AutoBattle.Steam.LeaderboardEntry[]> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> <result>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* <myPlayFabId>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.HashSet<System.String> <friendPlayFabIds>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x501750
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5026B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <RefreshCoroutine>d__49
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    LeaderboardUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass49_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x5026F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x502E30
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class LeaderboardUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static LeaderboardUI* _instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* overlayRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* contentContainer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Button* closeButton; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* titleText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* seasonInfoText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* statusText; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        TMP_Text* rankTierNameText; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        TMP_Text* rankRPValueText; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        TMP_Text* rankStreakText; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        TMP_Text* rankWinText; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        TMP_Text* rankLossText; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Image* tierProgressFill; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Image* rankCardImage; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* rowTemplate; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        GameObject* matchRowTemplateW; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        GameObject* matchRowTemplateL; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        GameObject* leaderboardTabBar; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        bool isOpen; // 0x00A8
        bool isFetching; // 0x00A9
        bool sceneWired; // 0x00AA
        uint8_t pad_00AB[0x5]; // 0x00AB
        System.Collections.Generic.List<UnityEngine.GameObject> dynamicRows; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        LeaderboardTab currentTab; // 0x00B8
        uint8_t pad_00B9[0x3]; // 0x00B9
        bool tabVisualsCached; // 0x00BC
        uint8_t pad_00BD[0x3]; // 0x00BD
        Color cachedSelectedBgColor; // 0x00C0
        uint8_t pad_00C1[0xF]; // 0x00C1
        Sprite* cachedSelectedBgSprite; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Color cachedSelectedTextColor; // 0x00D8
        uint8_t pad_00D9[0xF]; // 0x00D9
        FontStyles cachedSelectedFontStyle; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color cachedDeselectedBgColor; // 0x00EC
        uint8_t pad_00ED[0x13]; // 0x00ED
        Sprite* cachedDeselectedBgSprite; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Color cachedDeselectedTextColor; // 0x0108
        uint8_t pad_0109[0xF]; // 0x0109
        FontStyles cachedDeselectedFontStyle; // 0x0118
    
        // Methods
        static LeaderboardUI* get_Instance();  // RVA: 0x4F7190
        void OnDestroy();  // RVA: 0x4F4CB0
        void Update();  // RVA: 0x4F5DE0
        bool get_IsOpen();  // RVA: 0x4F7350
        void Toggle();  // RVA: 0x4F5C40
        void Open();  // RVA: 0x4F4D60
        void PositionMainPanel();  // RVA: 0x4F4E80
        void RefreshStaticTexts();  // RVA: 0x4F52F0
        void Close();  // RVA: 0x4F3910
        void EnsureBuilt();  // RVA: 0x4F3EE0
        void WireSceneAuthored();  // RVA: 0x4F5E90
        static Transform* FindDescendant(Transform* root, Il2CppString* name);  // RVA: 0x4F4100
        float GetReferenceSpacerHeight(float fallback);  // RVA: 0x4F4210
        void Refresh();  // RVA: 0x4F5A60
        IEnumerator* RefreshCoroutine();  // RVA: 0x4F5280
        void SwitchTab(LeaderboardTab tab);  // RVA: 0x4F5C10
        void BuildTabBar();  // RVA: 0x4F2F00
        void CacheTabVisualsFromScene(Transform* tabBarRoot);  // RVA: 0x4F34D0
        void RefreshTabButton(Transform* tabBarRoot, Il2CppString* childName, bool selected, Action* onClick);  // RVA: 0x4F56A0
        void CreateTabButton(Transform* parent, Il2CppString* label, bool selected, Action* onClick);  // RVA: 0x4F39A0
        IEnumerator* FetchFriendsLeaderboard(System.Action<AutoBattle.Steam.LeaderboardEntry[]> callback);  // RVA: 0x4F4090
        void BuildPanel();  // RVA: 0x4F0350
        void BuildRankHeader();  // RVA: 0x4F1B70
        void BuildLeaderboardContent(LeaderboardEntry[][] topEntries, LeaderboardEntry[][] aroundEntries, int32_t myPosition);  // RVA: 0x4EF670
        void BuildPvPMatchHistory();  // RVA: 0x4F1620
        void AddMatchRow(PvPMatchRecord* match);  // RVA: 0x4EE760
        void AddLeaderboardRow(int32_t rank, Il2CppString* playerName, int32_t rp, bool isMe);  // RVA: 0x4EDC60
        static void SetChildText(Transform* parent, Il2CppString* childName, Il2CppString* text, Color color);  // RVA: 0x4F5AF0
        void AddColumnHeader();  // RVA: 0x4ED8C0
        void AddSectionLabel(Il2CppString* text);  // RVA: 0x4EF400
        void AddSpacer(float height);  // RVA: 0x4EF580
        GameObject* MakeAnchoredText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions textAlign, bool leftAnchor, float offsetX, float width, float height);  // RVA: 0x4F4420
        GameObject* MakeText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x4F4A70
        GameObject* MakeChildText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x4F46E0
        void .ctor();  // RVA: 0x4F7110
        void <BuildTabBar>b__51_0();  // RVA: 0x4F5D80
        void <BuildTabBar>b__51_1();  // RVA: 0x4F5DB0
        void <BuildTabBar>b__51_2();  // RVA: 0x4F5D80
        void <BuildTabBar>b__51_3();  // RVA: 0x4F5DB0
    };

    // Namespace: AutoBattle.UI
    class LocalizeText : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* localizationKey; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool disableAtRuntime; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* tmpText; // 0x0030
    
        // Methods
        Il2CppString* get_LocalizationKey();  // RVA: 0x4F76C0
        void set_LocalizationKey(Il2CppString* value);  // RVA: 0x4F76D0
        void Awake();  // RVA: 0x4F7360
        void OnEnable();  // RVA: 0x4F74C0
        void OnDisable();  // RVA: 0x4F73B0
        void RefreshText();  // RVA: 0x4F75E0
        void .ctor();  // RVA: 0x4AEF60
    };

    // Namespace: AutoBattle.UI
    class NotificationUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* messageText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float displayDuration; // 0x0028
    
        // Methods
        void Initialize(Il2CppString* message, NotificationType type);  // RVA: 0x4F7700
        void .ctor();  // RVA: 0x4F7890
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class ChallengeLogResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class ChallengeLogResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class ChallengeLogDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ChallengeLogRecord* PvPChallengeLog; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class ChallengeLogRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class <>c__DisplayClass13_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool clearOk; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchAndShowRealResults>b__0(bool ok, Il2CppString* r);  // RVA: 0x502F40
    void <FetchAndShowRealResults>b__1(bool ok);  // RVA: 0x502F60
};

// Namespace: <global>
class <FetchAndShowRealResults>d__13
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass13_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    OfflinePvPSummaryUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> <results>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t <totalXP>5__3; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t <wins>5__4; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t <losses>5__5; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t <totalRP>5__6; // 0x0044

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x500B20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x501710
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class OfflinePvPSummaryUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t OFFLINE_PVP_XP_WIN;
        // static int32_t OFFLINE_PVP_XP_LOSE;
        // static Il2CppString* PREF_LAST_SESSION;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* summaryPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Transform* contentContainer; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* subtitleText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* summaryLineText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* closeButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        TMP_Text* titleText; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* resultEntryTemplate; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        System.Collections.Generic.List<UnityEngine.GameObject> dynamicEntries; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        bool hasChecked; // 0x0060
        bool sceneContentWired; // 0x0061
    
        // Methods
        void CheckOfflinePvP();  // RVA: 0x4F7920
        IEnumerator* FetchAndShowRealResults();  // RVA: 0x4F8770
        void SaveSessionTimestamp();  // RVA: 0x4FB390
        static void SaveLastSessionTime();  // RVA: 0x4FB300
        void ShowSummaryPanel(System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> results, int32_t totalXP, int32_t totalRP, int32_t wins, int32_t losses);  // RVA: 0x4FB420
        void WireSceneAuthoredContent(Transform* innerPanel);  // RVA: 0x4FB6F0
        static Transform* FindDescendant(Transform* root, Il2CppString* name);  // RVA: 0x4F8880
        static TMP_Text* FindDescendantTMP(Transform* root, Il2CppString* name);  // RVA: 0x4F87E0
        void EnsureSummaryPanel();  // RVA: 0x4F7F80
        void PopulateInnerContent(Transform* innerPanel, System.Collections.Generic.List<AutoBattle.UI.OfflinePvPResult> results, int32_t totalXP, int32_t totalRP, int32_t wins, int32_t losses);  // RVA: 0x4F8990
        void CreateText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions alignment, Vector2 pos, Vector2 size);  // RVA: 0x4F7D40
        void CloseSummary();  // RVA: 0x4F7A60
        void .ctor();  // RVA: 0x4FBA60
    };

    // Namespace: AutoBattle.UI
    class OfflineChallengeLog
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.UI.OfflineChallenge> challenges; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4F78A0
    };

    // Namespace: AutoBattle.UI
    class OfflineChallenge
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* challengerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t challengerLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t challengerPowerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        bool challengerWon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t timestampTicks; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int64_t timestamp; // 0x0030
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.UI
    class OfflinePvPResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* challengerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t challengerLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t challengerPowerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        bool won; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t timestampTicks; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.UI
    class OutskirtsBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* skySprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* cloudsSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* mountainsSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* grassSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite* statueSprite; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] animalFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float pixelScale; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        bool applyPixelScaleToStaticLayers; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float animalFrameRate; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float animalWalkSpeed; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float animalBaseY; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float animalRespawnMin; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float animalRespawnMax; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float animalYJitter; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool animalWalksRight; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float cloudScrollSpeed; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        Color cloudTint; // 0x0078
        uint8_t pad_0079[0xF]; // 0x0079
        float cloudYOffset; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float mountainsYOffset; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        float statueXOffset; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        float statueYOffset; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        RectTransform* skyLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* cloudContainerRT; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* cloudART; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* cloudBRT; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        RectTransform* mountainsLayer; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        RectTransform* animalLayer; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        RectTransform* statueLayer; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        RectTransform* grassLayer; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        RectTransform* rect; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Image* animalImage; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        int32_t animalFrame; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float animalTimer; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        float animalX; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float animalCurrentBaseY; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float animalRespawnTimer; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool animalActive; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float animalHalfWidth; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        float cloudTileWidth; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        bool built; // 0x0108
    
        // Methods
        void Awake();  // RVA: 0x4FBAE0
        void OnEnable();  // RVA: 0x4FCBB0
        void OnDisable();  // RVA: 0x4FCAF0
        void Build();  // RVA: 0x4FBB40
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x4FC910
        RectTransform* CreateCloudTile(Il2CppString* name, Transform* parent, Vector2 size, float xOffset);  // RVA: 0x4FC790
        void Update();  // RVA: 0x4FCD10
        void SetSprites(Sprite* sky, Sprite* clouds, Sprite* mountains, Sprite* grass, Sprite* statue, Sprite[][] animal);  // RVA: 0x4FCC80
        void .ctor();  // RVA: 0x4FD290
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float cursorY; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <ShowTooltip>b__0(Transform* section);  // RVA: 0x516570
};

// Namespace: <global>
class <>c__DisplayClass15_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <ShowTooltip>b__1(ItemData* t);  // RVA: 0x4BC400
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class PlayerBattleTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* tooltipPanel; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool isVisible; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* cachedInfoValues; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        TMP_Text* cachedStatValues; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* lastInfoValuesText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Il2CppString* lastStatValuesText; // 0x0048
    
        // Methods
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x4FE630
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x4FE620
        void OnDisable();  // RVA: 0x4FE620
        void Hide();  // RVA: 0x4FE620
        void Update();  // RVA: 0x500A40
        void ShowTooltip();  // RVA: 0x4FEFD0
        static void DisableTooltipRaycast(GameObject* panel);  // RVA: 0x4FDDC0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x4FD300
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x4FE700
        void HideTooltip();  // RVA: 0x4FE490
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x4FDF80
        Il2CppString* BuildInfoValuesText(PlayerState* ps, int32_t powerScore);  // RVA: 0x4FD4F0
        Il2CppString* BuildStatValuesText(PlayerStats baseStats, PlayerState* ps);  // RVA: 0x4FD790
        static Il2CppString* ColorizeStatValue(Il2CppString* display, float eff, float baseVal);  // RVA: 0x4FDD10
        static CombatRuntimeEffects* ResolveActiveRuntimeEffects();  // RVA: 0x4FEF40
        void RefreshDynamicSections();  // RVA: 0x4FED10
        Il2CppString* GetRarityColor(Il2CppString* rarity);  // RVA: 0x4FE330
        Il2CppString* GetCategoryIcon(Il2CppString* category);  // RVA: 0x4FE1D0
        void .ctor();  // RVA: 0x4AEF60
    };

    // Namespace: AutoBattle.UI
    class PrivacyConsentPopup : public MonoBehaviour
    {
    public:
        // Static fields
        // static Il2CppString* DEFAULT_TITLE;
        // static Il2CppString* DEFAULT_BODY;
        // static PrivacyConsentPopup* _sceneInstance;
        // static bool _sceneLookupAttempted;
        // static GameObject* _activeRuntimePopup;
    
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* popupRoot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        TMP_Text* titleText; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        TMP_Text* bodyText; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Button* gotItButton; // 0x0038
    
        // Methods
        static PrivacyConsentPopup* get_SceneInstance();  // RVA: 0x504A30
        void OnDestroy();  // RVA: 0x504190
        static void TryShow();  // RVA: 0x504640
        void ShowSceneAuthored();  // RVA: 0x504410
        void OnDismiss();  // RVA: 0x5042C0
        void BuildRuntime(Canvas* rootCanvas);  // RVA: 0x5030A0
        static Button* CreateRuntimeButton(Transform* parent, Il2CppString* label, TMP_FontAsset* font, Color tint, Vector2 anchoredPos);  // RVA: 0x503BF0
        void .ctor();  // RVA: 0x4AEF60
    };

    // Namespace: AutoBattle.UI
    class PulseScale : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float baseScale; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float pulseAmount; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float pulseSpeed; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool startAtPeak; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float timer; // 0x0030
    
        // Methods
        void OnEnable();  // RVA: 0x504C60
        void Update();  // RVA: 0x504C90
        void OnDisable();  // RVA: 0x504C10
        void .ctor();  // RVA: 0x504D20
    };

    // Namespace: AutoBattle.UI
    class PvEEnemyTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        EnemyState* enemy; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* tooltipPanel; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isVisible; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        Color nameColorVerde; // 0x0034
        uint8_t pad_0035[0xF]; // 0x0035
        Color nameColorGiallo; // 0x0044
        uint8_t pad_0045[0xF]; // 0x0045
        Color nameColorViola; // 0x0054
    
        // Methods
        void SetNameColors(Color verde, Color giallo, Color viola);  // RVA: 0x506440
        void SetEnemy(EnemyState* pveEnemy);  // RVA: 0x4ADCE0
        void ClearEnemy();  // RVA: 0x505A80
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x505E20
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x505E10
        void OnDisable();  // RVA: 0x505E10
        void ShowTooltip();  // RVA: 0x506460
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x505AB0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x505620
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x505E30
        void HideTooltip();  // RVA: 0x505C80
        void BuildContentSplit(TMP_Text* labels, TMP_Text* values);  // RVA: 0x504D40
        Il2CppString* BuildContent();  // RVA: 0x505210
        Il2CppString* GetColorHex(EnemyColor color);  // RVA: 0x505C00
        void .ctor();  // RVA: 0x506EE0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float cursorY; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <ShowTooltip>b__0(Transform* section);  // RVA: 0x5169F0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class PvPEnemyTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static float TOOLTIP_GAP_ABOVE;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        PlayerSnapshot* snapshot; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t opponentRP; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* tooltipPanel; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool isVisible; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* cachedStatValuesB; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Il2CppString* lastStatValuesText; // 0x0048
    
        // Methods
        void SetSnapshot(PlayerSnapshot* pvpSnapshot, int32_t rankingPoints);  // RVA: 0x508650
        void ClearSnapshot();  // RVA: 0x5076C0
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x508030
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x508020
        void OnDisable();  // RVA: 0x508020
        void ShowTooltip();  // RVA: 0x508680
        static void DisableTooltipRaycast(GameObject* panel);  // RVA: 0x5077A0
        static GameObject* BuildDefaultPanel(Transform* tooltipParent);  // RVA: 0x506F00
        void PositionTooltip(RectTransform* tooltipRect);  // RVA: 0x508040
        void HideTooltip();  // RVA: 0x507E70
        void Update();  // RVA: 0x50A6D0
        Il2CppString* BuildEnemyStatValuesText();  // RVA: 0x5070F0
        static Il2CppString* ColorizeStatValue(Il2CppString* display, float eff, float baseVal);  // RVA: 0x5076F0
        Il2CppString* FormatTime(float totalSeconds);  // RVA: 0x507960
        Il2CppString* GetRarityColor(Il2CppString* rarity);  // RVA: 0x507D10
        Il2CppString* GetCategoryIcon(Il2CppString* category);  // RVA: 0x507BB0
        void .ctor();  // RVA: 0x50A7A0
    };

    // Namespace: AutoBattle.UI
    class RestBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] bgFrames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* backgroundSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] fireFrames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite[][] humanFrames; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite[][] fireLightFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] particleFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float bgFrameRate; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float fireFrameRate; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float humanFrameRate; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float fireLightFrameRate; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float particleFrameRate; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool useGenderTwoPose; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        Sprite* humanMaleRestUp; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* humanMaleRestDown; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* humanFemaleRestUp; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite* humanFemaleRestDown; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Sprite* humanChar3RestUp; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite* humanChar3RestDown; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Sprite* humanChar4RestUp; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Sprite* humanChar4RestDown; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        Sprite* humanChar5RestUp; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Sprite* humanChar5RestDown; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite* humanChar6RestUp; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite* humanChar6RestDown; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float humanRestUpDuration; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float humanRestDownDuration; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        Vector2 firePosition; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Vector2 humanPosition; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Vector2 fireSize; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Vector2 humanSize; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        Material* fireLightAdditiveMaterial; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        RectTransform* bgLayer; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        RectTransform* fireLayer; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        RectTransform* humanLayer; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        RectTransform* fireLightLayer; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        RectTransform* particleLayer; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        RectTransform* rect; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        Image* bgImage; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        int32_t bgFrameIdx; // 0x0130
        uint8_t pad_0131[0x3]; // 0x0131
        float bgTimer; // 0x0134
        uint8_t pad_0135[0x3]; // 0x0135
        Image* humanImage; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        int32_t humanFrameIdx; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        float humanTimer; // 0x0144
        uint8_t pad_0145[0x3]; // 0x0145
        Image* fireLightImage; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        int32_t fireLightFrameIdx; // 0x0150
        uint8_t pad_0151[0x3]; // 0x0151
        float fireLightTimer; // 0x0154
        uint8_t pad_0155[0x3]; // 0x0155
        Image* particleImage; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        int32_t particleFrameIdx; // 0x0160
        uint8_t pad_0161[0x3]; // 0x0161
        float particleTimer; // 0x0164
        uint8_t pad_0165[0x3]; // 0x0165
        Sprite[][] activeRestPair; // 0x0168
        uint8_t pad_0169[0x7]; // 0x0169
        int32_t twoPoseIdx; // 0x0170
        uint8_t pad_0171[0x3]; // 0x0171
        float twoPoseTimer; // 0x0174
        uint8_t pad_0175[0x3]; // 0x0175
        bool built; // 0x0178
    
        // Methods
        void Awake();  // RVA: 0x50A7B0
        void OnEnable();  // RVA: 0x50B660
        void Build();  // RVA: 0x50A810
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, Vector2 anchoredPos, bool raycast, bool fullFrame);  // RVA: 0x50B350
        void Update();  // RVA: 0x50BA50
        void SetSprites(Sprite* background, Sprite[][] fire, Sprite[][] human);  // RVA: 0x50BA10
        void ResolveActiveRestPair();  // RVA: 0x50B6C0
        void RefreshGenderTwoPose();  // RVA: 0x50B6B0
        void .ctor();  // RVA: 0x50BF50
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<System.Int32> <>9__8_1;
    // static System.Action<System.Boolean> <>9__8_2;
    // static System.Action<System.Boolean> <>9__8_3;
    // static System.Action<System.Single> <>9__8_4;
    // static System.Action<System.Single> <>9__8_5;
    // static System.Action<System.Boolean> <>9__8_8;
    // static System.Action<System.Boolean> <>9__8_9;
    // static System.Action<System.Int32> <>9__8_10;
    // static UnityEngine.Events.UnityAction<System.Boolean> <>9__16_4;
    // static System.Action<System.Single> <>9__16_5;
    // static System.Action<System.Single> <>9__16_6;


    // Methods
    static void .cctor();  // RVA: 0x5187D0
    void .ctor();  // RVA: 0x4BC430
    void <BuildSettingsPanel>b__8_1(int32_t index);  // RVA: 0x515EF0
    void <BuildSettingsPanel>b__8_2(bool on);  // RVA: 0x516040
    void <BuildSettingsPanel>b__8_3(bool on);  // RVA: 0x516090
    void <BuildSettingsPanel>b__8_4(float val);  // RVA: 0x5161E0
    void <BuildSettingsPanel>b__8_5(float val);  // RVA: 0x5162B0
    void <BuildSettingsPanel>b__8_8(bool on);  // RVA: 0x516380
    void <BuildSettingsPanel>b__8_9(bool on);  // RVA: 0x516390
    void <BuildSettingsPanel>b__8_10(int32_t idx);  // RVA: 0x515E20
    void <WireSceneAuthoredPanel>b__16_4(bool on);  // RVA: 0x516390
    void <WireSceneAuthoredPanel>b__16_5(float v);  // RVA: 0x5163D0
    void <WireSceneAuthoredPanel>b__16_6(float v);  // RVA: 0x5164A0
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* languageText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* windowSizeText; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* vSyncToggleText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    TMP_Text* alwaysOnTopToggleText; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Action* onClose; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <WireSceneAuthoredPanel>b__0();  // RVA: 0x516E70
    void <WireSceneAuthoredPanel>b__1();  // RVA: 0x517330
    void <WireSceneAuthoredPanel>b__2();  // RVA: 0x5175E0
    void <WireSceneAuthoredPanel>b__3();  // RVA: 0x5178A0
    void <WireSceneAuthoredPanel>b__9(bool on);  // RVA: 0x517E30
    void <WireSceneAuthoredPanel>b__10(bool on);  // RVA: 0x517120
    void <WireSceneAuthoredPanel>b__7();  // RVA: 0x517B60
    void <WireSceneAuthoredPanel>b__8();  // RVA: 0x517B80
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    String[][] opts; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t sel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <RewireGameSpeedDropdownListeners>b__0();  // RVA: 0x517F60
    void <RewireGameSpeedDropdownListeners>b__1();  // RVA: 0x518090
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Transform* existing; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    GameObject* container; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <EnsureAnalyticsToggle>b__1(bool on);  // RVA: 0x518250
    void <EnsureAnalyticsToggle>b__0(bool on);  // RVA: 0x5181D0
};

// Namespace: <global>
class <>c__DisplayClass26_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    String[][] opts; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    int32_t sel; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <RewireSectorDebugDropdownListeners>b__0();  // RVA: 0x5182C0
    void <RewireSectorDebugDropdownListeners>b__1();  // RVA: 0x518430
};

// Namespace: <global>
class <>c__DisplayClass28_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* valueText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Single> onChanged; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <BindVolumeSlider>b__0(float val);  // RVA: 0x5185B0
};

// Namespace: <global>
class <>c__DisplayClass30_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t sel; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    String[][] opts; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* labelRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Int32> onChanged; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateDropdown>b__0();  // RVA: 0x5186B0
    void <CreateDropdown>b__1();  // RVA: 0x518740
};

// Namespace: <global>
class <>c__DisplayClass32_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* textRef; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Image* bgRef; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> onChanged; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateToggle>b__0();  // RVA: 0x52A220
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* valRef; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Single> onChanged; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateVolumeSlider>b__0(float val);  // RVA: 0x52A390
};

// Namespace: <global>
class <>c__DisplayClass34_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateActionButton>b__0();  // RVA: 0x502FD0
};

// Namespace: <global>
class <>c__DisplayClass35_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Action* onClick; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateCloseButton>b__0();  // RVA: 0x502FD0
};

// Namespace: <global>
class <>c__DisplayClass8_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.Int32> availableLangs; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Action* onClose; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <BuildSettingsPanel>b__0(int32_t pos);  // RVA: 0x52A670
    void <BuildSettingsPanel>b__11();  // RVA: 0x52A7A0
    void <BuildSettingsPanel>b__6();  // RVA: 0x52AA50
    void <BuildSettingsPanel>b__7();  // RVA: 0x52AAF0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SettingsHelper
    {
    public:
        // Static fields
        // static String[][] LanguageNames;
        // static Il2CppString* PREF_LANGUAGE;
        // static Il2CppString* PREF_FPS_CAP;
        // static Il2CppString* PREF_VSYNC;
        // static Il2CppString* PREF_ALWAYS_ON_TOP;
        // static Il2CppString* PREF_WINDOW_SIZE;
        // static int32_t DEFAULT_WINDOW_SIZE;
        // static int32_t _langIndex;
        // static int32_t _winSizeIndex;
        // static int32_t _fpsIndex;
        // static String[][] WindowSizeLabels;
        // static String[][] FpsLabels;
        // static Int32[][] FpsValues;
        // static Int32[][] GameSpeedValues;
    
    
        // Methods
        static Il2CppString* T(Il2CppString* key);  // RVA: 0x5144B0
        static GameObject* BuildSettingsPanel(Canvas* rootCanvas, Action* onClose);  // RVA: 0x50CBF0
        static void ApplyPersistedSettings();  // RVA: 0x50C370
        static void WireSceneAuthoredPanel(Button* languageLeftButton, Button* languageRightButton, TMP_Text* languageText, Button* windowSizeLeftButton, Button* windowSizeRightButton, TMP_Text* windowSizeText, Button* framerateLeftButton, Button* framerateRightButton, TMP_Text* framerateText, Toggle* vSyncToggle, TMP_Text* vSyncToggleText, Toggle* alwaysOnTopToggle, TMP_Text* alwaysOnTopToggleText, Toggle* fastPvPToggle, Slider* musicVolumeSlider, Slider* sfxVolumeSlider, TMP_Text* musicVolumeValueText, TMP_Text* sfxVolumeValueText, Button* closeButton, Button* debugAddItemsButton, Action* onClose);  // RVA: 0x514640
        static void RefreshSceneAuthoredPanelValues(TMP_Text* languageText, TMP_Text* windowSizeText, TMP_Text* framerateText, Toggle* vSyncToggle, TMP_Text* vSyncToggleText, Toggle* alwaysOnTopToggle, TMP_Text* alwaysOnTopToggleText, Toggle* fastPvPToggle, Slider* musicVolumeSlider, Slider* sfxVolumeSlider, TMP_Text* musicVolumeValueText, TMP_Text* sfxVolumeValueText);  // RVA: 0x5133F0
        static void EnsureSectorDebugDropdown(RectTransform* innerSettings);  // RVA: 0x512D40
        static void EnsureGameSpeedDropdown(RectTransform* innerSettings);  // RVA: 0x512500
        static void RewireGameSpeedDropdownListeners(Transform* container, String[][] options, int32_t initialIdx);  // RVA: 0x513ED0
        static void EnsureAnalyticsToggle(RectTransform* innerSettings);  // RVA: 0x511B30
        static void UpdateAnalyticsToggleText(Transform* analyticsToggleRoot, bool isOn);  // RVA: 0x514510
        static void ApplyDebugVisibilityToScenePanel(RectTransform* innerSettings, Toggle* fastPvPToggle, Button* debugAddItemsButton);  // RVA: 0x50C050
        static void RemoveLegacyDebugResetButtons(RectTransform* innerSettings);  // RVA: 0x513D60
        static void RewireSectorDebugDropdownListeners(Transform* container, String[][] options, int32_t initialIdx);  // RVA: 0x5141C0
        static String[][] BuildSectorOptions();  // RVA: 0x50C8C0
        static void BindVolumeSlider(Slider* slider, TMP_Text* valueText, float initialValue, System.Action<System.Single> onChanged);  // RVA: 0x50C680
        static void CreateSectionTitle(Transform* parent, Il2CppString* title, float yOffset);  // RVA: 0x50FFD0
        static void CreateDropdown(Transform* parent, String[][] options, int32_t currentIndex, float yOffset, System.Action<System.Int32> onChanged);  // RVA: 0x50F9F0
        static GameObject* CreateArrowButton(Transform* parent, Il2CppString* arrow, Vector2 pos, bool isLeft);  // RVA: 0x50EFC0
        static void CreateToggle(Transform* parent, Il2CppString* label, bool initialValue, float yOffset, System.Action<System.Boolean> onChanged);  // RVA: 0x5102F0
        static void CreateVolumeSlider(Transform* parent, Il2CppString* label, float yOffset, float initialValue, System.Action<System.Single> onChanged);  // RVA: 0x510BE0
        static void CreateActionButton(Transform* parent, Il2CppString* label, float yOffset, Color bgColor, Action* onClick);  // RVA: 0x50EAC0
        static void CreateCloseButton(Transform* parent, float yOffset, Action* onClick);  // RVA: 0x50F4A0
        static TMP_Text* CreateText(Transform* parent, Il2CppString* text, float fontSize, Color color, TextAlignmentOptions anchor, Vector2 pos, Vector2 size);  // RVA: 0x5100B0
        static void .cctor();  // RVA: 0x5158F0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static UnityEngine.Events.UnityAction<System.Boolean> <>9__53_0;


    // Methods
    static void .cctor();  // RVA: 0x52AB10
    void .ctor();  // RVA: 0x4BC430
    void <Start>b__53_0(bool on);  // RVA: 0x52A020
};

// Namespace: <global>
class <>c__DisplayClass55_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* locKey; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    Il2CppString* <AttachActionTooltip>b__0();  // RVA: 0x52A510
};

// Namespace: <global>
class <>c__DisplayClass81_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> friendSnapshots; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchAndPopulateFriends>b__0(System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> result);  // RVA: 0x502FC0
};

// Namespace: <global>
class <>c__DisplayClass82_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    SharedSettingsBarUI* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    PlayerSnapshot* capturedSnapshot; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CreateFriendRow>b__1();  // RVA: 0x52A570
};

// Namespace: <global>
class <>c__DisplayClass82_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayerSnapshot* captured; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    Il2CppString* <CreateFriendRow>b__0();  // RVA: 0x52A5A0
};

// Namespace: <global>
class <FetchAndPopulateFriends>d__81
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SharedSettingsBarUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass81_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    TMP_Text* <statusText>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Transform* <contentTransform>5__3; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x5290F0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529AD0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SharedSettingsBarUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static bool <DebugVisible>k__BackingField;
        // static Action* OnDebugVisibilityChanged;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Button* settingsToggleButton; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* settingsOpenSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* settingsClosedSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* settingsBar; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Button* settingsQuitButton; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* surveyPopUp; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Il2CppString* surveyUrl; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Button* surveyYesButton; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Button* surveyNoButton; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Button* settingsOptionsButton; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Button* settingsStatsButton; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Button* settingsScaleButton; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Toggle* audioToggle; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameObject* resetConfirmPanelRoot; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        TMP_Text* resetConfirmQuestionText; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Button* resetConfirmYesButton; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Button* resetConfirmNoButton; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* settingsPanelRoot; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Button* languageLeftButton; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Button* languageRightButton; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        TMP_Text* languageText; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Button* windowSizeLeftButton; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Button* windowSizeRightButton; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        TMP_Text* windowSizeText; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        Button* framerateLeftButton; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Button* framerateRightButton; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        TMP_Text* framerateText; // 0x00F0
        uint8_t pad_00F1[0x7]; // 0x00F1
        Toggle* vSyncToggle; // 0x00F8
        uint8_t pad_00F9[0x7]; // 0x00F9
        TMP_Text* vSyncToggleText; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        Toggle* alwaysOnTopToggle; // 0x0108
        uint8_t pad_0109[0x7]; // 0x0109
        TMP_Text* alwaysOnTopToggleText; // 0x0110
        uint8_t pad_0111[0x7]; // 0x0111
        Toggle* fastPvPToggle; // 0x0118
        uint8_t pad_0119[0x7]; // 0x0119
        Slider* musicVolumeSlider; // 0x0120
        uint8_t pad_0121[0x7]; // 0x0121
        Slider* sfxVolumeSlider; // 0x0128
        uint8_t pad_0129[0x7]; // 0x0129
        TMP_Text* musicVolumeValueText; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        TMP_Text* sfxVolumeValueText; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        Button* settingsCloseButton; // 0x0140
        uint8_t pad_0141[0x7]; // 0x0141
        Button* debugAddItemsButton; // 0x0148
        uint8_t pad_0149[0x7]; // 0x0149
        Button* challengeFriendButton; // 0x0150
        uint8_t pad_0151[0x7]; // 0x0151
        GameObject* settingsPanel; // 0x0158
        uint8_t pad_0159[0x7]; // 0x0159
        GameObject* resetConfirmPanel; // 0x0160
        uint8_t pad_0161[0x7]; // 0x0161
        bool settingsControlsBound; // 0x0168
        bool settingsBarOpen; // 0x0169
        uint8_t pad_016A[0x6]; // 0x016A
        LeaderboardUI* leaderboardUI; // 0x0170
        uint8_t pad_0171[0x7]; // 0x0171
        Vector2 defaultBarPos; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Vector2 defaultBtnPos; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        GameObject* friendListPanel; // 0x0188
        uint8_t pad_0189[0x7]; // 0x0189
        GameObject* friendRowTemplate; // 0x0190
        uint8_t pad_0191[0x7]; // 0x0191
        Coroutine* friendFetchCoroutine; // 0x0198
    
        // Methods
        static bool get_DebugVisible();  // RVA: 0x51D1E0
        static void set_DebugVisible(bool value);  // RVA: 0x51D2E0
        static void add_OnDebugVisibilityChanged(Action* value);  // RVA: 0x51D120
        static void remove_OnDebugVisibilityChanged(Action* value);  // RVA: 0x51D220
        void Start();  // RVA: 0x51BC00
        void Update();  // RVA: 0x51CDB0
        static void AttachActionTooltip(Button* btn, Il2CppString* locKey);  // RVA: 0x518930
        void UpdateButtonsForScreen(GameScreen screen);  // RVA: 0x51CA80
        void OnDestroy();  // RVA: 0x51B080
        void ToggleSettingsBar();  // RVA: 0x51C420
        void UpdateToggleIcon();  // RVA: 0x51CCD0
        void ToggleSettingsPanel();  // RVA: 0x51C5A0
        void DismissSettingsPanel();  // RVA: 0x51AB70
        void BindSettingsPanelControls();  // RVA: 0x518AD0
        void CollapseSettingsBar();  // RVA: 0x519E40
        void OnQuitClicked();  // RVA: 0x51B230
        void OnSurveyYes();  // RVA: 0x51B760
        void OnSurveyNo();  // RVA: 0x51B720
        static void QuitApp();  // RVA: 0x51B720
        void OnLeaderboardClicked();  // RVA: 0x51B150
        void CloseBar();  // RVA: 0x519DA0
        void DismissResetConfirmPopup();  // RVA: 0x51AA40
        void OnResetCharacterClicked();  // RVA: 0x51B370
        GameObject* BuildResetConfirmPopup();  // RVA: 0x5190C0
        static Button* CreatePopupButton(Transform* parent, Il2CppString* label, TMP_FontAsset* font, Color tint, Vector2 anchoredPos);  // RVA: 0x51A400
        void EnsureResetCharacterButtonInSettings();  // RVA: 0x51ACA0
        void OpenFriendListPanel();  // RVA: 0x51B7F0
        void DismissFriendListPanel();  // RVA: 0x51A980
        void ClearFriendListContent();  // RVA: 0x519B20
        IEnumerator* FetchAndPopulateFriends();  // RVA: 0x51ADC0
        void CreateFriendRow(Transform* parent, Il2CppString* friendName, PlayerSnapshot* snapshot, TMP_FontAsset* font);  // RVA: 0x519ED0
        void OnChallengeFriendClicked(PlayerSnapshot* friendSnapshot);  // RVA: 0x51AE30
        void .ctor();  // RVA: 0x51D0A0
        Il2CppString* <Start>b__53_1();  // RVA: 0x51C9B0
        void <OnResetCharacterClicked>b__71_0();  // RVA: 0x51C8E0
        void <BuildResetConfirmPopup>b__72_0();  // RVA: 0x51C7F0
        void <EnsureResetCharacterButtonInSettings>b__77_0();  // RVA: 0x51C8C0
    };

    // Namespace: AutoBattle.UI
    class SidePanelController : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float panelWidthCanvas; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float verticalOverflowPx; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        CanvasScaler* canvasScaler; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool useVerticalAlignment; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float panelHeightCanvas; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        Image* backgroundImage; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        RectTransform* innerPanelTransform; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        float innerPanelTopY; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float innerPanelBottomY; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        RectTransform* rectTransform; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        bool isOpen; // 0x0058
    
        // Methods
        bool get_IsOpen();  // RVA: 0x51E090
        void Awake();  // RVA: 0x51D3D0
        void Toggle();  // RVA: 0x51E010
        void Open();  // RVA: 0x51DD80
        void Open(bool forceRight);  // RVA: 0x51DC40
        void Close();  // RVA: 0x51DC00
        void ChooseSide();  // RVA: 0x51D440
        Il2CppString* ChooseVerticalAlignment(Vector3[][] corners);  // RVA: 0x51D640
        void ApplyInnerPanelOffset(bool isTop);  // RVA: 0x51D320
        void SetLeftSide();  // RVA: 0x51DDD0
        void SetRightSide();  // RVA: 0x51DEF0
        void .ctor();  // RVA: 0x51E070
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <AnimateIcon>d__26
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    float fps; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    SlotButtonUI* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <frameIndex>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <delay>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x528D50
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x528EC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <AnimateSynergyFrame>d__27
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SlotButtonUI* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x528F00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5290B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SlotButtonUI : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* equippedBG; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Image* icon; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Image* rarityFrame; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Image* elementDot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* slotLabel; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite* elementFire; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite* elementIce; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* elementHoly; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* elementArcane; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite* elementShadow; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite* rarityFrameSprite; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite* equippedFrameSprite; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Sprite[][] synergyFrameSprites; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        float synergyFrameFps; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Sprite[][] iconAnimFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Coroutine* iconAnimCoroutine; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Coroutine* synergyAnimCoroutine; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        GameObject* selectionFrame; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        GameObject* newBadge; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        GameObject* unequipGO; // 0x00B8
    
        // Methods
        Button* get_UnequipButton();  // RVA: 0x51EC00
        void SetSlotSelected(bool selected);  // RVA: 0x51E2E0
        void Setup(Il2CppString* slotDisplayName, ItemData* itemData, ItemInstance* itemInstance, bool hasNewForSlot, bool hasSynergy, Color synergyColor);  // RVA: 0x51E370
        void RefreshNewBadge(bool shouldShow);  // RVA: 0x51E250
        Sprite* GetElementSprite(ElementCategory category);  // RVA: 0x51E190
        IEnumerator* AnimateIcon(float fps);  // RVA: 0x51E0A0
        IEnumerator* AnimateSynergyFrame();  // RVA: 0x51E120
        void OnDisable();  // RVA: 0x51E1D0
        void .ctor();  // RVA: 0x51EBE0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct Attack2Mode
{
public:
    // Static fields
    // static Attack2Mode Standard;
    // static Attack2Mode RightAbove;
    // static Attack2Mode RandomBoth;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

// Namespace: <global>
class <LungeOnlyCoroutine>d__146
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SpriteAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float holdDuration; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x529B10
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529C00
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SpriteAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float frameRate; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t currentFrame; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float timer; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        bool isPlaying; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        Sprite[][] idleFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] attackFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Sprite[][] attack2Frames; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite[][] attack3Frames; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        bool isAttacking; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        int32_t attackFrame; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        float attackTimer; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float attackFrameRate; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        bool attackAnimationsEnabled; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        Sprite[][] hitFrames; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        bool isHit; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        int32_t hitFrame; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        float hitTimer; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        float hitFrameRate; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        Sprite[][] deathFrames; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        bool isDying; // 0x0098
        uint8_t pad_0099[0x3]; // 0x0099
        int32_t deathFrame; // 0x009C
        uint8_t pad_009D[0x3]; // 0x009D
        float deathTimer; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float deathFrameRate; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        Image* slashImage; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Sprite[][] slashFrames; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Sprite[][] slashSottoFrames; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Sprite[][] slashSopraFrames; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        Sprite[][] slashAttack3Frames; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        Sprite[][] slashRightAboveFrames; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        Sprite[][] slashMagicFrames; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        int32_t slashFrame; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        bool slashPlaying; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        float slashTimer; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        float slashFrameRate; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        bool queueSlashSopra; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        int32_t currentAttackVariant; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        int32_t slashStartFrame; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        bool slashWaitingForFrame; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        float slashStartDelay; // 0x0100
        uint8_t pad_0101[0x3]; // 0x0101
        float slashDelayTimer; // 0x0104
        uint8_t pad_0105[0x3]; // 0x0105
        bool slashDelayActive; // 0x0108
        bool keepWeaponVisibleDuringAttack; // 0x0109
        uint8_t pad_010A[0x2]; // 0x010A
        int32_t weaponReappearFrame; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        int32_t weaponReappearFrameAtk3; // 0x0110
        uint8_t pad_0111[0x3]; // 0x0111
        Vector2 slashSottoPos; // 0x0114
        uint8_t pad_0115[0x7]; // 0x0115
        Vector2 slashSopraPos; // 0x011C
        uint8_t pad_011D[0x7]; // 0x011D
        bool hasSlashPositions; // 0x0124
        uint8_t pad_0125[0x3]; // 0x0125
        Attack2Mode currentAttack2Mode; // 0x0128
        uint8_t pad_0129[0x3]; // 0x0129
        bool atk2UseRightAbove; // 0x012C
        uint8_t pad_012D[0x3]; // 0x012D
        Vector2 slashRightAbovePos; // 0x0130
        uint8_t pad_0131[0x7]; // 0x0131
        Vector2 slashRangedPos; // 0x0138
        uint8_t pad_0139[0x7]; // 0x0139
        float slashRangedScale; // 0x0140
        uint8_t pad_0141[0x3]; // 0x0141
        Color slashStandardColor; // 0x0144
        uint8_t pad_0145[0xF]; // 0x0145
        Color slashRightAboveColor; // 0x0154
        uint8_t pad_0155[0xF]; // 0x0155
        Vector2 slashAttack3Pos; // 0x0164
        uint8_t pad_0165[0x7]; // 0x0165
        Vector2 slashAttack3SizeOverride; // 0x016C
        uint8_t pad_016D[0x7]; // 0x016D
        int32_t slashStartFrameAtk3; // 0x0174
        uint8_t pad_0175[0x3]; // 0x0175
        Transform* slashAttack3UpperSibling; // 0x0178
        uint8_t pad_0179[0x7]; // 0x0179
        Vector2 slashDefaultSize; // 0x0180
        uint8_t pad_0181[0x7]; // 0x0181
        bool hasSlashDefaultSize; // 0x0188
        uint8_t pad_0189[0x3]; // 0x0189
        Vector2 idleRectSize; // 0x018C
        uint8_t pad_018D[0x7]; // 0x018D
        Vector2 idleAnchoredPos; // 0x0194
        uint8_t pad_0195[0x7]; // 0x0195
        bool hasIdleRectSize; // 0x019C
        uint8_t pad_019D[0x3]; // 0x019D
        float idleSpriteHeight; // 0x01A0
        uint8_t pad_01A1[0x3]; // 0x01A1
        float idleBottomMarginPx; // 0x01A4
        uint8_t pad_01A5[0x3]; // 0x01A5
        float attackBottomMarginPx; // 0x01A8
        uint8_t pad_01A9[0x3]; // 0x01A9
        float idleContentCenterXPx; // 0x01AC
        uint8_t pad_01AD[0x3]; // 0x01AD
        float attackContentCenterXPx; // 0x01B0
        uint8_t pad_01B1[0x3]; // 0x01B1
        float idleFrameWidth; // 0x01B4
        uint8_t pad_01B5[0x3]; // 0x01B5
        float attackFrameWidth; // 0x01B8
        uint8_t pad_01B9[0x3]; // 0x01B9
        bool mirrorXCompensation; // 0x01BC
        uint8_t pad_01BD[0x3]; // 0x01BD
        Transform* lungeTarget; // 0x01C0
        uint8_t pad_01C1[0x7]; // 0x01C1
        float lungeDistancePx; // 0x01C8
        uint8_t pad_01C9[0x3]; // 0x01C9
        int32_t lungeStartFrameAtk3; // 0x01CC
        uint8_t pad_01CD[0x3]; // 0x01CD
        int32_t lungeEndFrameAtk3; // 0x01D0
        uint8_t pad_01D1[0x3]; // 0x01D1
        int32_t lungeStartFrameAtk2; // 0x01D4
        uint8_t pad_01D5[0x3]; // 0x01D5
        int32_t lungeEndFrameAtk2; // 0x01D8
        uint8_t pad_01D9[0x3]; // 0x01D9
        bool lungeActive; // 0x01DC
        uint8_t pad_01DD[0x3]; // 0x01DD
        Vector2 lungeOriginalPos; // 0x01E0
        uint8_t pad_01E1[0x7]; // 0x01E1
        bool suppressLungeThisAttack; // 0x01E8
        bool rangedAttackThisTurn; // 0x01E9
        uint8_t pad_01EA[0x6]; // 0x01EA
        Coroutine* lungeOnlyCoroutine; // 0x01F0
        uint8_t pad_01F1[0x7]; // 0x01F1
        EquipOverlayController* overlayController; // 0x01F8
        uint8_t pad_01F9[0x7]; // 0x01F9
        Action* OnAttackComplete; // 0x0200
        uint8_t pad_0201[0x7]; // 0x0201
        Action* OnHitComplete; // 0x0208
        uint8_t pad_0209[0x7]; // 0x0209
        Action* OnDeathComplete; // 0x0210
        uint8_t pad_0211[0x7]; // 0x0211
        bool useNativeSize; // 0x0218
    
        // Methods
        int32_t get_CurrentAttackVariant();  // RVA: 0x522B90
        void add_OnAttackComplete(Action* value);  // RVA: 0x522980
        void remove_OnAttackComplete(Action* value);  // RVA: 0x522C20
        void add_OnHitComplete(Action* value);  // RVA: 0x522AE0
        void remove_OnHitComplete(Action* value);  // RVA: 0x522D80
        void add_OnDeathComplete(Action* value);  // RVA: 0x522A30
        void remove_OnDeathComplete(Action* value);  // RVA: 0x522CD0
        int32_t get_CurrentFrame();  // RVA: 0x522BA0
        int32_t get_FrameCount();  // RVA: 0x522BD0
        bool get_IsAttacking();  // RVA: 0x522BF0
        bool get_IsHit();  // RVA: 0x522C10
        bool get_IsDying();  // RVA: 0x522C00
        void SetFrames(Sprite[][] newFrames);  // RVA: 0x520C90
        void ResetAnimationStateForNewEntity();  // RVA: 0x520370
        void SetAttackFrames(Sprite[][] newAttackFrames);  // RVA: 0x520C10
        void SetAttack2Frames(Sprite[][] newAttack2Frames);  // RVA: 0x520BB0
        void SetAttack3Frames(Sprite[][] newAttack3Frames);  // RVA: 0x520BD0
        void SetAttackAnimationsEnabled(bool enabled);  // RVA: 0x520BE0
        void SetHitFrames(Sprite[][] newHitFrames);  // RVA: 0x520EA0
        void SetDeathFrames(Sprite[][] newDeathFrames);  // RVA: 0x520C50
        void SetSlashOverlay(Image* slashImg, Sprite[][] slashSpriteFrames);  // RVA: 0x521070
        void SetSlashSopraFrames(Sprite[][] sopraFrames);  // RVA: 0x5211B0
        void SetSlashAttack3Frames(Sprite[][] atk3SlashFrames);  // RVA: 0x520F60
        void SetSlashRightAboveFrames(Sprite[][] rightAboveFrames);  // RVA: 0x521180
        void SetSlashMagicFrames(Sprite[][] magicFrames);  // RVA: 0x521050
        void SetSlashRangedPosition(Vector2 pos);  // RVA: 0x521170
        void SetAttack2Mode(Attack2Mode mode);  // RVA: 0x520BC0
        void SetSlashRightAbovePosition(Vector2 pos);  // RVA: 0x5211A0
        void SetSlashColors(Color standardColor, Color rightAboveColor);  // RVA: 0x521030
        void SetSlashAttack3Layout(Vector2 pos, Vector2 sizeOverride, int32_t startFrame);  // RVA: 0x520FF0
        void SetSlashAttack3UpperSibling(Transform* upperBound);  // RVA: 0x521010
        void SetSlashPositions(Vector2 sottoPos, Vector2 sopraPos);  // RVA: 0x521150
        void SetSlashStartDelay(float seconds);  // RVA: 0x5211D0
        void SetKeepWeaponVisibleDuringAttack(bool keep);  // RVA: 0x520EB0
        void ResizeSlashToPlayerPixelScale();  // RVA: 0x520890
        void CollectMaxBounds(Sprite[][] arr, float maxW, float maxH);  // RVA: 0x51F3A0
        void SetOverlayController(EquipOverlayController* controller);  // RVA: 0x520F40
        void PlayAttack(bool suppressLunge, bool rangedAttack);  // RVA: 0x51F6D0
        void PlayHit();  // RVA: 0x51FF30
        void PlayDeath();  // RVA: 0x51FD00
        void AdjustRectForDeath(Sprite* deathSprite);  // RVA: 0x51EF80
        void ResetDeath();  // RVA: 0x5207C0
        void AdjustRectForAnimation(Sprite* animSprite);  // RVA: 0x51ECA0
        void RestoreIdleRect();  // RVA: 0x520A80
        void ForceRestoreIdleRect();  // RVA: 0x51F560
        void SetTargetImage(Image* img);  // RVA: 0x4ADCE0
        void SetFrameRate(float fps);  // RVA: 0x520C70
        void SetAttackFrameRate(float fps);  // RVA: 0x520BF0
        void SetLungeParams(Transform* target, float distancePx, int32_t atk3Start, int32_t atk3End, int32_t atk2Start, int32_t atk2End);  // RVA: 0x520EC0
        void PlayLungeOnly(float holdDuration);  // RVA: 0x520100
        IEnumerator* LungeOnlyCoroutine(float holdDuration);  // RVA: 0x51F650
        void ApplyLunge();  // RVA: 0x51F170
        void ReleaseLunge();  // RVA: 0x520220
        void SetAnimationMargins(float idleBottomPx, float attackBottomPx, float idleCenterX, float attackCenterX, float idleFrameW, float attackFrameW);  // RVA: 0x520B60
        void SetMirrorXCompensation(bool mirror);  // RVA: 0x520F30
        void SetHitFrameRate(float fps);  // RVA: 0x520E80
        void SetUseNativeSize(bool value);  // RVA: 0x521310
        void SetStaticSprite(Sprite* sprite);  // RVA: 0x5211F0
        void Stop();  // RVA: 0x5214D0
        void Play();  // RVA: 0x520210
        void UpdateSlashOverlay();  // RVA: 0x5214E0
        void StartSlashSopra();  // RVA: 0x521320
        void Update();  // RVA: 0x5217D0
        void .ctor();  // RVA: 0x522870
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <PlayLoop>d__6
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    SpriteLoopAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <frameIndex>5__3; // 0x002C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x529C40
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529D90
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class SpriteLoopAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Image* targetImage; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite[][] frames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        float fps; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Coroutine* animCoroutine; // 0x0038
    
        // Methods
        void OnEnable();  // RVA: 0x522E70
        void OnDisable();  // RVA: 0x522E30
        IEnumerator* PlayLoop();  // RVA: 0x522FE0
        void .ctor();  // RVA: 0x4A9A00
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class StatRow
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    TMP_Text* labelText; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    TMP_Text* pointsText; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    TMP_Text* totPointsText; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Button* buttonLeft; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Button* buttonRight; // 0x0030

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t idx; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    StatsAllocationUI* <>4__this; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <Start>b__0();  // RVA: 0x52A0F0
    void <Start>b__1();  // RVA: 0x52A1C0
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class StatsAllocationUI : public MonoBehaviour
    {
    public:
        // Static fields
        // static int32_t IDX_HP;
        // static int32_t IDX_ATK;
        // static int32_t IDX_DEF;
        // static int32_t IDX_CRIT;
        // static int32_t IDX_PARRY;
        // static String[][] StatLabels;
    
        uint8_t pad_0000[0x20]; // 0x0000
        float atkPerPoint; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float hpPerPoint; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float defPerPoint; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float critPercentPerPoint; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float parryPercentPerPoint; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* panelRoot; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        TMP_Text* creditsText; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Button* powerUpButton; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        StatRow[][] statRows; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        EquipScreenUI* equipScreenUI; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Int32[][] pendingPoints; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        bool openedBeforeStart; // 0x0068
    
        // Methods
        void Awake();  // RVA: 0x524110
        void Start();  // RVA: 0x525220
        Il2CppString* GetCreditValueString(int32_t idx);  // RVA: 0x524380
        Il2CppString* GetPointsScoreString(int32_t idx, int32_t totalPoints);  // RVA: 0x5244C0
        bool get_IsOpen();  // RVA: 0x525CF0
        void Open();  // RVA: 0x524AF0
        void Close();  // RVA: 0x5241D0
        void ApplySideMirroring();  // RVA: 0x523E90
        void OnRightClick(int32_t idx);  // RVA: 0x524A20
        void OnLeftClick(int32_t idx);  // RVA: 0x524640
        void OnPowerUpClicked();  // RVA: 0x5246A0
        static int32_t GetAllocated(PlayerState* ps, int32_t idx);  // RVA: 0x524300
        void RefreshUI();  // RVA: 0x524CF0
        void PushPreviewToEquipScreen();  // RVA: 0x524C10
        void .ctor();  // RVA: 0x525C40
        static void .cctor();  // RVA: 0x525AF0
    };

    // Namespace: AutoBattle.UI
    class StatTooltip : public MonoBehaviour
    {
    public:
        // Static fields
        // static float TOOLTIP_WIDTH;
        // static float TOOLTIP_PADDING;
        // static Il2CppString* TEMPLATE_KEY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* tooltipText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* tooltipPanel; // 0x0028
    
        // Methods
        void SetTooltipText(Il2CppString* text);  // RVA: 0x523D90
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x523A20
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x523A10
        void OnDisable();  // RVA: 0x523A10
        void HideTooltip();  // RVA: 0x523970
        GameObject* CreateTooltipPanel();  // RVA: 0x523480
        static TMP_Text* FindTooltipText(GameObject* panel);  // RVA: 0x523820
        static GameObject* BuildDefaultPanel(Transform* parent);  // RVA: 0x523050
        void PositionTooltip(RectTransform* panelRect, Canvas* rootCanvas);  // RVA: 0x523AD0
        void .ctor();  // RVA: 0x523E40
    };

    // Namespace: AutoBattle.UI
    class TextCtrl : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* targetText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Color normalColor; // 0x0028
        uint8_t pad_0029[0xF]; // 0x0029
        Color highlightedColor; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        Color pressedColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        Color selectedColor; // 0x0058
        uint8_t pad_0059[0xF]; // 0x0059
        Color disabledColor; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        float fadeDuration; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Button* button; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        bool isPointerInside; // 0x0088
        bool isPointerDown; // 0x0089
        bool isSelected; // 0x008A
        bool wasInteractable; // 0x008B
        Color currentColor; // 0x008C
        uint8_t pad_008D[0xF]; // 0x008D
        Color targetColor; // 0x009C
        uint8_t pad_009D[0xF]; // 0x009D
        float lerpTimer; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        bool isLerping; // 0x00B0
    
        // Methods
        void Awake();  // RVA: 0x526E70
        void OnEnable();  // RVA: 0x527150
        void Update();  // RVA: 0x527930
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x527450
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x527580
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x527310
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x5276B0
        void OnSelect(BaseEventData* eventData);  // RVA: 0x527770
        void OnDeselect(BaseEventData* eventData);  // RVA: 0x527020
        Color EvaluateTargetColor();  // RVA: 0x526F30
        void TransitionToColor(Color color);  // RVA: 0x5278A0
        void ApplyColor(Color color);  // RVA: 0x526DD0
        void .ctor();  // RVA: 0x526D80
    };

    // Namespace: AutoBattle.UI
    class TextCtrlToggle : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        TMP_Text* targetText; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Color normalColor; // 0x0028
        uint8_t pad_0029[0xF]; // 0x0029
        Color highlightedColor; // 0x0038
        uint8_t pad_0039[0xF]; // 0x0039
        Color pressedColor; // 0x0048
        uint8_t pad_0049[0xF]; // 0x0049
        Color selectedColor; // 0x0058
        uint8_t pad_0059[0xF]; // 0x0059
        Color disabledColor; // 0x0068
        uint8_t pad_0069[0xF]; // 0x0069
        float fadeDuration; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        Toggle* toggle; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        bool isPointerInside; // 0x0088
        bool isPointerDown; // 0x0089
        bool wasInteractable; // 0x008A
        bool wasOn; // 0x008B
        Color currentColor; // 0x008C
        uint8_t pad_008D[0xF]; // 0x008D
        Color targetColor; // 0x009C
        uint8_t pad_009D[0xF]; // 0x009D
        float lerpTimer; // 0x00AC
        uint8_t pad_00AD[0x3]; // 0x00AD
        bool isLerping; // 0x00B0
    
        // Methods
        void Awake();  // RVA: 0x525E10
        void OnEnable();  // RVA: 0x5260D0
        void OnDisable();  // RVA: 0x525FE0
        void Update();  // RVA: 0x5269C0
        void OnToggleValueChanged(bool isOn);  // RVA: 0x526890
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x5264F0
        void OnPointerExit(PointerEventData* eventData);  // RVA: 0x526660
        void OnPointerDown(PointerEventData* eventData);  // RVA: 0x526370
        void OnPointerUp(PointerEventData* eventData);  // RVA: 0x5267D0
        Color EvaluateTargetColor();  // RVA: 0x525ED0
        void TransitionToColor(Color color);  // RVA: 0x526930
        void ApplyColor(Color color);  // RVA: 0x525D70
        void .ctor();  // RVA: 0x526D80
    };

    // Namespace: AutoBattle.UI
    class TextOutline : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Color outlineColor; // 0x0020
        uint8_t pad_0021[0xF]; // 0x0021
        float outlineThickness; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t outlineDirections; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        TMP_Text* tmpText; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool meshNeedsUpdate; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        Color cachedColor; // 0x0044
        uint8_t pad_0045[0xF]; // 0x0045
        float cachedThickness; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        int32_t cachedDirections; // 0x0058
    
        // Methods
        void Awake();  // RVA: 0x5285C0
        void OnEnable();  // RVA: 0x528B60
        void OnDisable();  // RVA: 0x528A30
        void OnTextChanged(Il2CppObject* obj);  // RVA: 0x528CB0
        void LateUpdate();  // RVA: 0x528870
        void CacheSettings();  // RVA: 0x5287D0
        void ApplyOutline();  // RVA: 0x527CC0
        Vector2[][] BuildOffsets();  // RVA: 0x528610
        static int32_t CountUsedTriangleIndices(Int32[][] triangles, int32_t maxVertIndex);  // RVA: 0x5287F0
        static void EnsureArraySize(T[][] array, int32_t minSize);  // RVA: 0x2B8640
        void .ctor();  // RVA: 0x528D20
    };

    // Namespace: AutoBattle.UI
    class UIButtonSound : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        bool playClick; // 0x0020
        bool playHover; // 0x0021
    
        // Methods
        void OnPointerClick(PointerEventData* eventData);  // RVA: 0x52AB80
        void OnPointerEnter(PointerEventData* eventData);  // RVA: 0x52AC50
        void .ctor();  // RVA: 0x52AD20
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <Play>d__10
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    UIFlipbookAnimator* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float <delay>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    int32_t <idx>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    int32_t <count>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x529DD0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x529FE0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class UIFlipbookAnimator : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite[][] frames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float fps; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool loop; // 0x002C
        bool useUnscaledTime; // 0x002D
        uint8_t pad_002E[0x2]; // 0x002E
        Image* image; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Coroutine* playRoutine; // 0x0038
    
        // Methods
        void Awake();  // RVA: 0x52AD30
        void OnEnable();  // RVA: 0x52AD80
        void OnDisable();  // RVA: 0x522E30
        void SetFrames(Sprite[][] newFrames, float newFps);  // RVA: 0x52AF10
        IEnumerator* Play();  // RVA: 0x52AEA0
        void .ctor();  // RVA: 0x52AFC0
    };

} // namespace AutoBattle.UI

// Namespace: <global>
struct NotificationType
{
public:
    // Static fields
    // static NotificationType LevelUp;
    // static NotificationType ItemDrop;
    // static NotificationType CraftOk;
    // static NotificationType SectorClear;
    // static NotificationType Death;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.UI
{

    // Namespace: AutoBattle.UI
    class UIManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameObject* creationScreen; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        GameObject* homeScreen; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameObject* equipScreen; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        GameObject* inventoryScreen; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameObject* battleScreen; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        GameObject* worldHomeScreen; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        GameObject* worldBattleScreen; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        GameObject* sharedSettingsBar; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        GameObject* notificationPrefab; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Transform* notificationParent; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        ForgeScreenUI* forgeScreenUI; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        SidePanelController* equipSidePanel; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        SidePanelController* inventorySidePanel; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        GameScreen currentScreen; // 0x0088
    
        // Methods
        void Start();  // RVA: 0x52BBE0
        void OnDisable();  // RVA: 0x52B1F0
        void ShowScreen(GameScreen screen);  // RVA: 0x52B530
        void ShowNotification(Il2CppString* message, NotificationType type);  // RVA: 0x52B390
        void HandleScreenChange(GameScreen screen);  // RVA: 0x52B1E0
        void HandleNotification(Il2CppString* message, Il2CppString* notifType);  // RVA: 0x52AFE0
        void .ctor();  // RVA: 0x52BE80
    };

    // Namespace: AutoBattle.UI
    class UITemplate : public MonoBehaviour
    {
    public:
        // Static fields
        // static System.Collections.Generic.Dictionary<System.String,AutoBattle.UI.UITemplate> registry;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* templateKey; // 0x0020
    
        // Methods
        static void RebuildRegistry();  // RVA: 0x53F0A0
        static GameObject* Clone(Il2CppString* key, Transform* parent);  // RVA: 0x53ED20
        static bool HasTemplate(Il2CppString* key);  // RVA: 0x53EF50
        static void InvalidateRegistry();  // RVA: 0x53F050
        void .ctor();  // RVA: 0x4AEF60
    };

    // Namespace: AutoBattle.UI
    class VillageBackground : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Sprite* backgroundSprite; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Sprite* luceFinestraSprite; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite* livelloSopraSprite; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Sprite* cornicheFinestraSprite; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Sprite[][] ominoSfondoFrames; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Sprite[][] ominoFinestraFrames; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        float ominoSfondoFrameRate; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float ominoSfondoWalkSpeed; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        float ominoSfondoBaseY; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        float ominoSfondoRespawnMin; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        float ominoSfondoRespawnMax; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float ominoSfondoYJitter; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        bool ominoSfondoWalksRight; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float ominoFinestraFrameRate; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float ominoFinestraSpeed; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float ominoFinestraMinX; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        float ominoFinestraMaxX; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        float ominoFinestraBaseY; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        bool ominoFinestraFlipOnTurn; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        float pixelScale; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        RectTransform* backgroundLayer; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        RectTransform* ominoSfondoLayer; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        RectTransform* luceFinestraLayer; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        RectTransform* ominoFinestraLayer; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        RectTransform* livelloSopraLayer; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        RectTransform* corniceFinestraLayer; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        RectTransform* rect; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Image* ominoSfondoImage; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        int32_t ominoSfondoFrameIdx; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float ominoSfondoFrameTimer; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float ominoSfondoX; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float ominoSfondoCurrentBaseY; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float ominoSfondoRespawnTimer; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        bool ominoSfondoActive; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float ominoSfondoHalfWidth; // 0x00E0
        uint8_t pad_00E1[0x7]; // 0x00E1
        Image* ominoFinestraImage; // 0x00E8
        uint8_t pad_00E9[0x7]; // 0x00E9
        int32_t ominoFinestraFrameIdx; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        float ominoFinestraFrameTimer; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        float ominoFinestraX; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        int32_t ominoFinestraDirection; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        bool built; // 0x0100
    
        // Methods
        void Awake();  // RVA: 0x53F250
        void OnEnable();  // RVA: 0x53FE80
        void Build();  // RVA: 0x53F2B0
        RectTransform* CreateLayer(Il2CppString* name, Sprite* sprite, Vector2 size, bool raycast);  // RVA: 0x53FCA0
        void Update();  // RVA: 0x53FF30
        void SetSprites(Sprite* bg, Sprite[][] ominoSfondo, Sprite* luce, Sprite[][] ominoFinestra, Sprite* livelloSopra, Sprite* cornice);  // RVA: 0x53FEA0
        void .ctor();  // RVA: 0x5405D0
    };

    // Namespace: AutoBattle.UI
    class WorldFrameMirror : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        RectTransform* sourceFrame; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        RectTransform* myRT; // 0x0028
    
        // Methods
        void Awake();  // RVA: 0x540800
        void AutoDiscoverSource();  // RVA: 0x540640
        void LateUpdate();  // RVA: 0x5408A0
        void .ctor();  // RVA: 0x4AEF60
    };

} // namespace AutoBattle.UI

// Namespace: <global>
class <SendCoroutine>d__48
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* eventName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* bodyJson; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53CAF0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53CC60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class AnalyticsManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AnalyticsManager* <Instance>k__BackingField;
        // static Il2CppString* PREF_OPTED_OUT;
        // static Il2CppString* PREF_CONSENT_SHOWN;
        // static bool TRACK_ITEM_DROPS;
        // static int32_t MAX_PRELOGIN_BUFFERED;
    
        uint8_t pad_0000[0x20]; // 0x0000
        Il2CppString* sessionId; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        float sessionStartRealtime; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool sessionStartFired; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        int32_t maxSectorReachedThisSession; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t totalDeathsThisSession; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        int32_t totalDeathsInArena; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t totalPvPMatchesThisSession; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t currentSectorTracked; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool sessionEndFired; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        System.Collections.Generic.Queue<System.ValueTuple<System.String,System.String>> preLoginBuffer; // 0x0048
    
        // Methods
        static AnalyticsManager* get_Instance();  // RVA: 0x52EC80
        static void set_Instance(AnalyticsManager* value);  // RVA: 0x52EEC0
        static bool get_IsOptedOut();  // RVA: 0x52EE30
        static void set_IsOptedOut(bool value);  // RVA: 0x52EF20
        static bool get_HasShownConsent();  // RVA: 0x52EC40
        static void set_HasShownConsent(bool value);  // RVA: 0x52EE70
        static bool get_IsEnabled();  // RVA: 0x52ED10
        static bool get_IsCollecting();  // RVA: 0x52ECC0
        void Awake();  // RVA: 0x52BFC0
        void Start();  // RVA: 0x52CBF0
        void OnDestroy();  // RVA: 0x52C5E0
        void HandlePlayFabLoginSuccess();  // RVA: 0x52C570
        void OnApplicationQuit();  // RVA: 0x52C5C0
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x52C5A0
        void TrySendSessionEnd();  // RVA: 0x52C5C0
        void TrackSessionStart();  // RVA: 0x52E740
        void TrackSessionEnd();  // RVA: 0x52E4E0
        void TrackSectorClear(int32_t sector, int32_t level, int32_t powerScore);  // RVA: 0x52DFC0
        void TrackPlayerDeath(int32_t sector, int32_t level, int32_t powerScore, Il2CppString* enemyCategory, Il2CppString* enemyColor, int32_t hpPctBefore, int32_t sectorEnemyIndex);  // RVA: 0x52DA60
        void TrackLevelUps(int32_t levelBefore, int32_t levelAfter, int32_t sector, int32_t powerScore);  // RVA: 0x52D860
        void TrackItemDrop(ItemInstance* item, Il2CppString* source);  // RVA: 0x4B4660
        void TrackSectorEntered(int32_t sector, Il2CppString* source);  // RVA: 0x52E2B0
        void TrackCharacterReset(int32_t level, int32_t sector, int32_t powerScore, int32_t sectorEnemyIndex);  // RVA: 0x52D200
        void TrackPvPMatch(bool won, int32_t rpDelta, int32_t opponentPS, int32_t myPS, int32_t totalPvPMatches);  // RVA: 0x52DD40
        void TrackArenaWaveReached(int32_t wave, int32_t killsInWave, int32_t maxWaveRecord, bool waveCleared);  // RVA: 0x52CFA0
        void TrackArenaDeath(int32_t wave, int32_t checkpointWave);  // RVA: 0x52CE00
        void TrackForgeExecuted(Il2CppString* rarityFrom, Il2CppString* rarityTo, Il2CppString* sourceScreen);  // RVA: 0x52D5B0
        void TrackStaminaExhausted(int32_t sector, int32_t level);  // RVA: 0x52EA20
        void TrackDemoLockedFeatureHit(Il2CppString* featureName, Il2CppString* sourceScreen);  // RVA: 0x52D420
        void Send(Il2CppString* eventName, System.Collections.Generic.Dictionary<System.String,System.Object> body);  // RVA: 0x52C8B0
        IEnumerator* SendCoroutine(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x52C820
        void EnqueuePreLogin(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x52C280
        void FlushPreLoginBuffer();  // RVA: 0x52C370
        void .ctor();  // RVA: 0x52EBC0
    };

    // Namespace: AutoBattle.Steam
    class PlayerSnapshot
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* playerName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t level; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t powerScore; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t hp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float atk; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        float def; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        float crit; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float parry; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> equippedItems; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Il2CppString* playFabId; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t characterType; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float totalBattleTime; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t rankingPoints; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        int32_t totalPvPMatches; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        int64_t lastUpdatedTicks; // 0x0058
    
        // Methods
        void .ctor();  // RVA: 0x532FD0
    };

    // Namespace: AutoBattle.Steam
    class EquippedItemInfo
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* slotName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* itemName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* rarity; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* category; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class LoginWithSteamRequest
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* SteamTicket; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool CreateAccount; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* TitleId; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class LoginWithCustomIdRequest
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* CustomId; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    bool CreateAccount; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* TitleId; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class LoginResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LoginResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class LoginResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* SessionTicket; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* PlayFabId; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class <>c__DisplayClass12_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayFabClient* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <LoginWithSteam>b__0(bool success, Il2CppString* response);  // RVA: 0x53D1D0
};

// Namespace: <global>
class <>c__DisplayClass13_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    PlayFabClient* <>4__this; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <LoginWithCustomId>b__0(bool success, Il2CppString* response);  // RVA: 0x53D3D0
};

// Namespace: <global>
class <>c__DisplayClass14_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <UpdateUserData>b__0(bool success, Il2CppString* response);  // RVA: 0x53D560
};

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <UpdateUserDataRaw>b__0(bool success, Il2CppString* response);  // RVA: 0x53D610
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <GetUserData>b__0(bool success, Il2CppString* response);  // RVA: 0x53D6C0
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <UpdatePlayerStatistics>b__0(bool success, Il2CppString* response);  // RVA: 0x53D6F0
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <GetLeaderboardAroundPlayer>b__0(bool success, Il2CppString* response);  // RVA: 0x53D6C0
};

// Namespace: <global>
class <>c__DisplayClass19_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean,System.String> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <GetLeaderboard>b__0(bool success, Il2CppString* response);  // RVA: 0x53D6C0
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <UpdateDisplayName>b__0(bool success, Il2CppString* response);  // RVA: 0x53D7A0
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* eventName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <WritePlayerEvent>b__0(bool success, Il2CppString* response);  // RVA: 0x53D850
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* functionName; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Action<System.Boolean,System.String> callback; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <ExecuteCloudScript>b__0(bool success, Il2CppString* response);  // RVA: 0x53D920
};

// Namespace: <global>
class <ExecuteCloudScript>d__22
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* functionName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* functionParamsJson; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x536140
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x536390
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <GetLeaderboard>d__19
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t startPosition; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t maxResults; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x538C20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538DC0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <GetLeaderboardAroundPlayer>d__18
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t maxResults; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x538A60
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538BE0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <GetUserData>d__16
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    String[][] keys; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* targetPlayFabId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x539440
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5397A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <LoginWithCustomId>d__13
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* customId; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53A710
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53A8D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <LoginWithSteam>d__12
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* steamTicketHex; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53B440
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53B600
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PostAuthenticatedRequest>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* endpoint; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonBody; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    System.Action<System.Boolean,System.String> callback; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53C060
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C0E0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <PostRequest>d__24
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabClient* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* endpoint; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonBody; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool authenticated; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Action<System.Boolean,System.String> callback; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    UnityWebRequest* <request>5__2; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x53C640
    bool MoveNext();  // RVA: 0x53C120
    void <>m__Finally1();  // RVA: 0x53C680
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C600
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <UpdateDisplayName>d__20
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabClient* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* displayName; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53DB10
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53DCA0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <UpdatePlayerStatistics>d__17
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* statName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t value; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53DCE0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53DE60
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <UpdateUserData>d__14
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* key; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayFabClient* <>4__this; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53E240
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53E490
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <UpdateUserDataRaw>d__15
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* key; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* jsonValue; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53DFC0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53E200
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <WritePlayerEvent>d__21
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* eventName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* bodyJson; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayFabClient* <>4__this; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53EA50
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53ECE0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class PlayFabClient
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* titleId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* sessionTicket; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* playFabId; // 0x0020
    
        // Methods
        Il2CppString* get_SessionTicket();  // RVA: 0x4B6700
        Il2CppString* get_PlayFabId();  // RVA: 0x4F76C0
        bool get_IsLoggedIn();  // RVA: 0x52FB00
        Il2CppString* get_BaseUrl();  // RVA: 0x52FAB0
        void .ctor(Il2CppString* titleId);  // RVA: 0x52FA70
        IEnumerator* LoginWithSteam(Il2CppString* steamTicketHex, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F480
        IEnumerator* LoginWithCustomId(Il2CppString* customId, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F3D0
        IEnumerator* UpdateUserData(Il2CppString* key, Il2CppString* value, System.Action<System.Boolean> callback);  // RVA: 0x52F8F0
        IEnumerator* UpdateUserDataRaw(Il2CppString* key, Il2CppString* jsonValue, System.Action<System.Boolean> callback);  // RVA: 0x52F830
        IEnumerator* GetUserData(Il2CppString* targetPlayFabId, String[][] keys, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F310
        IEnumerator* UpdatePlayerStatistics(Il2CppString* statName, int32_t value, System.Action<System.Boolean> callback);  // RVA: 0x52F770
        IEnumerator* GetLeaderboardAroundPlayer(Il2CppString* statName, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F190
        IEnumerator* GetLeaderboard(Il2CppString* statName, int32_t startPosition, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F250
        IEnumerator* UpdateDisplayName(Il2CppString* displayName, System.Action<System.Boolean> callback);  // RVA: 0x52F6C0
        IEnumerator* WritePlayerEvent(Il2CppString* eventName, Il2CppString* bodyJson, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F9B0
        IEnumerator* ExecuteCloudScript(Il2CppString* functionName, Il2CppString* functionParamsJson, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F0D0
        IEnumerator* PostAuthenticatedRequest(Il2CppString* endpoint, Il2CppString* jsonBody, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F530
        IEnumerator* PostRequest(Il2CppString* endpoint, Il2CppString* jsonBody, bool authenticated, System.Action<System.Boolean,System.String> callback);  // RVA: 0x52F5F0
        Il2CppString* EscapeJsonString(Il2CppString* str);  // RVA: 0x52EF70
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class LeaderboardResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class LeaderboardResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> Leaderboard; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class GetUserDataResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    GetUserDataResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class GetUserDataResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    UserDataDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class UserDataDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    UserDataRecord* PlayerSnapshot; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class UserDataRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* LastUpdated; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* Permission; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Action<System.Boolean> <>9__56_1;
    // static System.Action<System.Boolean> <>9__57_1;


    // Methods
    static void .cctor();  // RVA: 0x53DAA0
    void .ctor();  // RVA: 0x4BC430
    void <LoginWithSteam>b__56_1(bool _);  // RVA: 0x4B4660
    void <LoginWithDevCustomId>b__57_1(bool _);  // RVA: 0x4B4660
};

// Namespace: <global>
class <>c__DisplayClass56_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* resultMsg; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool done; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <LoginWithSteam>b__0(bool s, Il2CppString* msg);  // RVA: 0x53DA00
};

// Namespace: <global>
class <>c__DisplayClass57_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* resultMsg; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <LoginWithDevCustomId>b__0(bool s, Il2CppString* msg);  // RVA: 0x502F40
};

// Namespace: <global>
class <>c__DisplayClass59_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Action<System.Boolean> callback; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <ClearUserData>b__0(bool ok);  // RVA: 0x4ED6E0
};

// Namespace: <global>
class <>c__DisplayClass61_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <LogPvPChallengeCloudScript>b__0(bool s, Il2CppString* r);  // RVA: 0x502F40
};

// Namespace: <global>
class <>c__DisplayClass62_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <ResetPvPLeaderboardVersionCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x502F40
};

// Namespace: <global>
class <>c__DisplayClass63_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <HardResetAllPvPRPCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x502F40
};

// Namespace: <global>
class <>c__DisplayClass65_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool snapshotOk; // 0x0010
    bool psOk; // 0x0011
    bool lvlOk; // 0x0012

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <UploadSnapshotCoroutine>b__0(bool ok);  // RVA: 0x53DA30
    void <UploadSnapshotCoroutine>b__1(bool ok);  // RVA: 0x53DA40
    void <UploadSnapshotCoroutine>b__2(bool ok);  // RVA: 0x53DA50
};

// Namespace: <global>
class <>c__DisplayClass68_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchOpponentsCoroutine>b__0(bool s, Il2CppString* r);  // RVA: 0x502F40
    void <FetchOpponentsCoroutine>b__1(bool s, Il2CppString* r);  // RVA: 0x502F40
    void <FetchOpponentsCoroutine>b__2(bool s, Il2CppString* r);  // RVA: 0x502F40
};

// Namespace: <global>
class <>c__DisplayClass68_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchOpponentsCoroutine>b__3(bool s, Il2CppString* r);  // RVA: 0x502F40
};

// Namespace: <global>
class <>c__DisplayClass73_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool success; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <GetPlayFabIDsFromSteamIDs>b__0(bool s, Il2CppString* r);  // RVA: 0x502F40
};

// Namespace: <global>
class <>c__DisplayClass74_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.Dictionary<System.String,System.String> mapping; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchFriendSnapshots>b__0(System.Collections.Generic.Dictionary<System.String,System.String> m);  // RVA: 0x502FC0
};

// Namespace: <global>
class <>c__DisplayClass74_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* fetchResponse; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchFriendSnapshots>b__1(bool s, Il2CppString* r);  // RVA: 0x502F40
};

// Namespace: <global>
class <ClearUserData>d__59
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* key; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x535F80
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x536100
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <FetchFriendSnapshots>d__74
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> friends; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>>> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    <>c__DisplayClass74_0* <>8__1; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    <>c__DisplayClass74_1* <>8__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>> <results>5__2; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    int32_t <fetchCount>5__3; // 0x0050
    uint8_t pad_0051[0x7]; // 0x0051
    System.Collections.Generic.List.Enumerator<System.ValueTuple<System.UInt64,System.String>> <>7__wrap3; // 0x0058
    uint8_t pad_0059[0x1F]; // 0x0059
    System.ValueTuple<System.UInt64,System.String> <friend>5__5; // 0x0078
    uint8_t pad_0079[0xF]; // 0x0079
    Il2CppString* <playFabId>5__6; // 0x0088

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x536E20
    bool MoveNext();  // RVA: 0x5363D0
    void <>m__Finally1();  // RVA: 0x536EB0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x536DE0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <FetchLeaderboard>d__79
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t startPos; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t maxResults; // 0x003C

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x5376E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5377F0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <FetchLeaderboardAroundPlayer>d__80
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t maxResults; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x536F00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x537000
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <FetchOpponentsCoroutine>d__68
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass68_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass68_1* <>8__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    bool <useRanking>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    Il2CppString* <matchmakingStat>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> <entries>5__4; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    System.Collections.Generic.List.Enumerator<AutoBattle.Steam.LeaderboardEntry> <>7__wrap4; // 0x0050
    uint8_t pad_0051[0x17]; // 0x0051
    LeaderboardEntry* <candidate>5__6; // 0x0068

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x5387F0
    bool MoveNext();  // RVA: 0x537830
    void <>m__Finally1();  // RVA: 0x538880
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5387B0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <FetchUserData>d__58
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean,System.String> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* playFabId; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* key; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x5388D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x538A20
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <GetPlayFabIDsFromSteamIDs>d__73
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    String[][] steamIds; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    System.Action<System.Collections.Generic.Dictionary<System.String,System.String>> callback; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    <>c__DisplayClass73_0* <>8__1; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    System.Collections.Generic.Dictionary<System.String,System.String> <result>5__2; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <batchStart>5__3; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x538E00
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x539400
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <HardResetAllPvPRPCoroutine>d__63
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass63_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x5397E0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x539A20
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <LogPvPChallengeCloudScript>d__61
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* challengerName; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* opponentPlayFabId; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t challengerLevel; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t challengerPowerScore; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    bool challengerWon; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    PlayFabManager* <>4__this; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    <>c__DisplayClass61_0* <>8__1; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53A160
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53A6D0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <LoginWithDevCustomId>d__57
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass57_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53A910
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53ADE0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <LoginWithRetry>d__55
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53AE20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53B400
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <LoginWithSteam>d__56
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass56_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    float <timeout>5__2; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <elapsed>5__3; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53B640
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C020
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <ResetPvPLeaderboardVersionCoroutine>d__62
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass62_0* <>8__1; // 0x0028

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53C750
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53C990
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <SaveUserData>d__78
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* key; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    Il2CppString* value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53C9D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53CAB0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <UpdateStatistic>d__77
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    System.Action<System.Boolean> callback; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* statName; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    int32_t value; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53DEA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53DF80
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <UploadSnapshotCoroutine>d__65
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    Il2CppString* snapshotJson; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    PlayFabManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass65_0* <>8__1; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    PlayerSnapshot* snapshot; // 0x0038

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53E4D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53E890
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <WriteAnalyticsEvent>d__53
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    PlayFabManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* eventName; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    Il2CppString* bodyJson; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53E8D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53EA10
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class PlayFabManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static PlayFabManager* <Instance>k__BackingField;
        // static Il2CppString* FULL_TITLE_ID;
        // static Il2CppString* DEMO_TITLE_ID;
        // static Il2CppString* SNAPSHOT_KEY;
        // static Il2CppString* POWERSCORE_STAT;
        // static Il2CppString* PVPRATING_STAT;
        // static Il2CppString* LEVEL_STAT;
        // static int32_t MATCHMAKING_CALIBRATION_THRESHOLD;
        // static int32_t MAX_LOGIN_RETRIES;
        // static float RETRY_DELAY;
    
        uint8_t pad_0000[0x20]; // 0x0000
        PlayFabClient* client; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Il2CppString* <LastLoginError>k__BackingField; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* <LoginStateInfo>k__BackingField; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t loginRetryCount; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        Action* OnLoginSuccess; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Action<System.String> OnLoginFailed; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Action<AutoBattle.Steam.PlayerSnapshot> OnOpponentFound; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Action* OnNoOpponentFound; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Il2CppString* lastUploadedSnapshotJson; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        System.Collections.Generic.List<AutoBattle.Steam.PlayerSnapshot> cachedOpponents; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        bool isFetchingOpponents; // 0x0070
    
        // Methods
        static PlayFabManager* get_Instance();  // RVA: 0x532C10
        static void set_Instance(PlayFabManager* value);  // RVA: 0x532F60
        static Il2CppString* get_CurrentTitleId();  // RVA: 0x532BC0
        static Il2CppString* get_TITLE_ID();  // RVA: 0x532BC0
        bool get_IsLoggedIn();  // RVA: 0x532C60
        Il2CppString* get_PlayFabId();  // RVA: 0x532CB0
        Il2CppString* get_LastLoginError();  // RVA: 0x532C90
        void set_LastLoginError(Il2CppString* value);  // RVA: 0x4A7D30
        Il2CppString* get_LoginStateInfo();  // RVA: 0x532CA0
        void set_LoginStateInfo(Il2CppString* value);  // RVA: 0x532FC0
        void add_OnLoginSuccess(Action* value);  // RVA: 0x5329C0
        void remove_OnLoginSuccess(Action* value);  // RVA: 0x532D70
        void add_OnLoginFailed(System.Action<System.String> value);  // RVA: 0x532910
        void remove_OnLoginFailed(System.Action<System.String> value);  // RVA: 0x532CC0
        void add_OnOpponentFound(System.Action<AutoBattle.Steam.PlayerSnapshot> value);  // RVA: 0x532B00
        void remove_OnOpponentFound(System.Action<AutoBattle.Steam.PlayerSnapshot> value);  // RVA: 0x532EB0
        void add_OnNoOpponentFound(Action* value);  // RVA: 0x532A60
        void remove_OnNoOpponentFound(Action* value);  // RVA: 0x532E10
        bool get_IsFetchingOpponents();  // RVA: 0x532C50
        bool HasCachedOpponents();  // RVA: 0x531460
        System.Collections.Generic.List<AutoBattle.Steam.PlayerSnapshot> get_CachedOpponents();  // RVA: 0x532BB0
        void Awake();  // RVA: 0x52FB20
        void OnDestroy();  // RVA: 0x531B00
        IEnumerator* WriteAnalyticsEvent(Il2CppString* eventName, Il2CppString* bodyJson);  // RVA: 0x532790
        void Login();  // RVA: 0x531A10
        IEnumerator* LoginWithRetry();  // RVA: 0x531930
        IEnumerator* LoginWithSteam();  // RVA: 0x5319A0
        IEnumerator* LoginWithDevCustomId();  // RVA: 0x5318C0
        IEnumerator* FetchUserData(Il2CppString* playFabId, Il2CppString* key, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530930
        IEnumerator* ClearUserData(Il2CppString* key, System.Action<System.Boolean> callback);  // RVA: 0x5305E0
        void LogPvPChallenge(Il2CppString* opponentPlayFabId, Il2CppString* opponentName, int32_t opponentLevel, int32_t opponentPowerScore, bool challengerWon);  // RVA: 0x531620
        IEnumerator* LogPvPChallengeCloudScript(Il2CppString* opponentPlayFabId, Il2CppString* challengerName, int32_t challengerLevel, int32_t challengerPowerScore, bool challengerWon);  // RVA: 0x531550
        IEnumerator* ResetPvPLeaderboardVersionCoroutine();  // RVA: 0x531FA0
        IEnumerator* HardResetAllPvPRPCoroutine();  // RVA: 0x5313F0
        void UploadSnapshot();  // RVA: 0x5325C0
        IEnumerator* UploadSnapshotCoroutine(PlayerSnapshot* snapshot, Il2CppString* snapshotJson);  // RVA: 0x532510
        PlayerSnapshot* BuildSnapshot(PlayerState* player, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x52FF20
        void PreFetchOpponents();  // RVA: 0x531F00
        IEnumerator* FetchOpponentsCoroutine();  // RVA: 0x5308C0
        PlayerSnapshot* GetRandomOpponent(int32_t playerPowerScore, float rangePercent);  // RVA: 0x530AA0
        EnemyState* SnapshotToEnemyState(PlayerSnapshot* snapshot);  // RVA: 0x5320D0
        PlayerSnapshot* BuildFallbackSnapshot(LeaderboardEntry* entry);  // RVA: 0x52FD40
        static bool IsSelf(PlayerSnapshot* op, Il2CppString* myPlayFabId, Il2CppString* mySteamName);  // RVA: 0x5314B0
        IEnumerator* GetPlayFabIDsFromSteamIDs(String[][] steamIds, System.Action<System.Collections.Generic.Dictionary<System.String,System.String>> callback);  // RVA: 0x5309F0
        IEnumerator* FetchFriendSnapshots(System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> friends, System.Action<System.Collections.Generic.List<System.ValueTuple<System.String,AutoBattle.Steam.PlayerSnapshot>>> callback);  // RVA: 0x530690
        System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> ParseLeaderboardResponse(Il2CppString* json);  // RVA: 0x531BD0
        PlayerSnapshot* ParseSnapshotFromUserData(Il2CppString* json);  // RVA: 0x531CE0
        IEnumerator* UpdateStatistic(Il2CppString* statName, int32_t value, System.Action<System.Boolean> callback);  // RVA: 0x532450
        IEnumerator* SaveUserData(Il2CppString* key, Il2CppString* value, System.Action<System.Boolean> callback);  // RVA: 0x532010
        IEnumerator* FetchLeaderboard(Il2CppString* statName, int32_t startPos, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530800
        IEnumerator* FetchLeaderboardAroundPlayer(Il2CppString* statName, int32_t maxResults, System.Action<System.Boolean,System.String> callback);  // RVA: 0x530740
        void .ctor();  // RVA: 0x532840
    };

    // Namespace: AutoBattle.Steam
    class LeaderboardEntry
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* PlayFabId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* DisplayName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int32_t StatValue; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        int32_t Position; // 0x0024
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingResponse
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        SteamIdMappingData* data; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Steam.SteamIdMappingEntry> Data; // 0x0010
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Steam
    class SteamIdMappingEntry
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* SteamStringId; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* PlayFabId; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

} // namespace AutoBattle.Steam

// Namespace: <global>
class RankingDataResponse
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataResponseData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class RankingDataResponseData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataDict* Data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class RankingDataDict
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    RankingDataRecord* RankingData; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class RankingDataRecord
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* Value; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class LeaderboardResponseWrapper
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    LeaderboardResponseWrapperData* data; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class LeaderboardResponseWrapperData
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Steam.LeaderboardEntry> Leaderboard; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class <>c__DisplayClass75_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool statOk; // 0x0010
    bool dataOk; // 0x0011
    uint8_t pad_0012[0x6]; // 0x0012
    System.Action<System.Boolean> <>9__1; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <SyncToPlayFabCoroutine>b__1(bool ok);  // RVA: 0x53DA30
    void <SyncToPlayFabCoroutine>b__0(bool ok);  // RVA: 0x53DA40
};

// Namespace: <global>
class <>c__DisplayClass76_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool fetchOk; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppString* response; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<System.Boolean,System.String> <>9__0; // 0x0020

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <LoadFromPlayFab>b__0(bool ok, Il2CppString* r);  // RVA: 0x502F40
};

// Namespace: <global>
class <>c__DisplayClass77_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    bool selfResyncOk; // 0x0010
    bool topOk; // 0x0011
    uint8_t pad_0012[0x6]; // 0x0012
    Il2CppString* topResponse; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    bool aroundOk; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    Il2CppString* aroundResponse; // 0x0028

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <FetchLeaderboard>b__0(bool ok);  // RVA: 0x53DA30
    void <FetchLeaderboard>b__1(bool ok, Il2CppString* r);  // RVA: 0x53DA60
    void <FetchLeaderboard>b__2(bool ok, Il2CppString* r);  // RVA: 0x53DA80
};

// Namespace: <global>
class <FetchLeaderboard>d__77
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    System.Action<AutoBattle.Steam.LeaderboardEntry[],AutoBattle.Steam.LeaderboardEntry[],System.Int32> callback; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RankingManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    <>c__DisplayClass77_0* <>8__1; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    LeaderboardEntry[][] <topEntries>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    LeaderboardEntry[][] <aroundEntries>5__3; // 0x0040
    uint8_t pad_0041[0x7]; // 0x0041
    int32_t <myPosition>5__4; // 0x0048

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x537040
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x5376A0
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <LoadFromPlayFab>d__76
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    <>c__DisplayClass76_0* <>8__1; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    RankingManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <attempt>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x539A60
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53A120
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <SyncToPlayFabCoroutine>d__75
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    RankingManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    <>c__DisplayClass75_0* <>8__1; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    int32_t <attempt>5__2; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x53CCA0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x53D190
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.Steam
{

    // Namespace: AutoBattle.Steam
    class RankingManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static RankingManager* <Instance>k__BackingField;
        // static Il2CppString* PVPRATING_STAT;
        // static Il2CppString* RANKING_DATA_KEY;
        // static int32_t RP_WIN_BASE;
        // static int32_t RP_LOSE_BASE;
        // static int32_t RP_WIN_MAX;
        // static int32_t RP_LOSE_MAX;
        // static int32_t RP_OFFLINE_WIN_BASE;
        // static int32_t RP_OFFLINE_LOSE_BASE;
        // static float PS_BONUS_WIN_FACTOR;
        // static float PS_BONUS_LOSE_FACTOR;
        // static int32_t STREAK_ACTIVATE;
        // static float STREAK_MULT_4;
        // static float STREAK_MULT_5;
        // static int32_t SEASON_DURATION_DAYS;
    
        uint8_t pad_0000[0x20]; // 0x0000
        RankingData* data; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        bool rankingLoaded; // 0x0028
        bool suppressSync; // 0x0029
        uint8_t pad_002A[0x6]; // 0x002A
        System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> OnRPChanged; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Steam.RankTier> OnTierReached; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Action<System.Int32> OnNewSeason; // 0x0040
    
        // Methods
        static RankingManager* get_Instance();  // RVA: 0x534EA0
        static void set_Instance(RankingManager* value);  // RVA: 0x5351B0
        void BeginBatchProcess();  // RVA: 0x5332F0
        void EndBatchProcess();  // RVA: 0x533930
        int32_t get_CurrentRP();  // RVA: 0x534C90
        int32_t get_WinStreak();  // RVA: 0x534F80
        RankTier get_CurrentTier();  // RVA: 0x534CB0
        RankTier get_HighestTier();  // RVA: 0x534E40
        int32_t get_HighestRP();  // RVA: 0x534E20
        int32_t get_SeasonNumber();  // RVA: 0x534F20
        int32_t get_SeasonWins();  // RVA: 0x534F40
        int32_t get_SeasonLosses();  // RVA: 0x534F00
        int32_t get_TotalPvPMatches();  // RVA: 0x534F60
        System.Collections.Generic.List<AutoBattle.Steam.PvPMatchRecord> get_RecentMatches();  // RVA: 0x534EE0
        int32_t get_DaysRemaining();  // RVA: 0x534D10
        int32_t get_FloorRP();  // RVA: 0x534E00
        void add_OnRPChanged(System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> value);  // RVA: 0x534B30
        void remove_OnRPChanged(System.Action<System.Int32,System.Int32,AutoBattle.Steam.RankTier> value);  // RVA: 0x535050
        void add_OnTierReached(System.Action<AutoBattle.Steam.RankTier> value);  // RVA: 0x534BE0
        void remove_OnTierReached(System.Action<AutoBattle.Steam.RankTier> value);  // RVA: 0x535100
        void add_OnNewSeason(System.Action<System.Int32> value);  // RVA: 0x534A80
        void remove_OnNewSeason(System.Action<System.Int32> value);  // RVA: 0x534FA0
        void Awake();  // RVA: 0x5330D0
        void OnDestroy();  // RVA: 0x533CD0
        int32_t ProcessPvPResult(bool playerWon, int32_t playerPowerScore, int32_t opponentPowerScore, Il2CppString* opponentName, int32_t opponentLevel, bool isOffline);  // RVA: 0x5340B0
        int32_t ProcessPvPResult(bool playerWon, int32_t playerPowerScore, int32_t opponentPowerScore, bool isOffline);  // RVA: 0x534280
        int32_t CalculateActiveRP(bool playerWon, int32_t playerPS, int32_t opponentPS);  // RVA: 0x533300
        int32_t CalculateOfflineRP(bool playerWon, int32_t playerPS, int32_t opponentPS);  // RVA: 0x533410
        float GetStreakMultiplier();  // RVA: 0x5339D0
        static RankTier GetTierForRP(int32_t rp);  // RVA: 0x533AE0
        static int32_t GetTierMinRP(RankTier tier);  // RVA: 0x533B60
        static int32_t GetTierMaxRP(RankTier tier);  // RVA: 0x533B20
        static Il2CppString* GetTierName(RankTier tier);  // RVA: 0x533B90
        static Color GetTierColor(RankTier tier);  // RVA: 0x533A20
        void CheckSeasonRollover();  // RVA: 0x533500
        void StartNewSeason(int32_t seasonNum);  // RVA: 0x534780
        void DebugForceSeasonReset();  // RVA: 0x5335D0
        void DebugHardResetAllPvPRP();  // RVA: 0x533750
        void ResetForCharacterReset();  // RVA: 0x534650
        void PerformSeasonReset();  // RVA: 0x533F60
        void SyncToPlayFab();  // RVA: 0x5348F0
        IEnumerator* SyncToPlayFabCoroutine();  // RVA: 0x534880
        IEnumerator* LoadFromPlayFab();  // RVA: 0x533C60
        IEnumerator* FetchLeaderboard(System.Action<AutoBattle.Steam.LeaderboardEntry[],AutoBattle.Steam.LeaderboardEntry[],System.Int32> callback);  // RVA: 0x533940
        LeaderboardEntry[][] ParseLeaderboardEntries(Il2CppString* json);  // RVA: 0x533DA0
        void .ctor();  // RVA: 0x4AEF60
    };

    // Namespace: AutoBattle.Steam
    struct RankTier
    {
    public:
        // Static fields
        // static RankTier Bronze;
        // static RankTier Silver;
        // static RankTier Gold;
        // static RankTier Diamond;
        // static RankTier Legend;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Steam
    class RankingData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t rp; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t highestRP; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t floorRP; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t winStreak; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t seasonNumber; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int64_t seasonStartTicks; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int64_t seasonEndTicks; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t seasonWins; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t seasonLosses; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t totalPvPMatches; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<AutoBattle.Steam.PvPMatchRecord> recentMatches; // 0x0048
    
        // Methods
        void .ctor();  // RVA: 0x533050
    };

    // Namespace: AutoBattle.Steam
    class PvPMatchRecord
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* opponentName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t opponentLevel; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        bool playerWon; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t rpDelta; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool isOffline; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int64_t timestampTicks; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Steam
    class SteamManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static SteamManager* <Instance>k__BackingField;
        // static uint32_t FULL_APP_ID;
        // static uint32_t DEMO_APP_ID;
    
        uint8_t pad_0000[0x20]; // 0x0000
        bool <Initialized>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        SteamAPIWarningMessageHook_t* m_SteamAPIWarningMessageHook; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Steamworks.Callback<Steamworks.GetTicketForWebApiResponse_t> m_GetTicketForWebApiResponse; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        Il2CppString* m_pendingWebApiTicketHex; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool m_webApiTicketReady; // 0x0040
        bool m_webApiTicketFailed; // 0x0041
        bool m_webApiTicketRequestInFlight; // 0x0042
    
        // Methods
        static SteamManager* get_Instance();  // RVA: 0x535EA0
        static void set_Instance(SteamManager* value);  // RVA: 0x535F20
        static uint32_t get_CurrentAppId();  // RVA: 0x535E60
        bool get_Initialized();  // RVA: 0x535E90
        void set_Initialized(bool value);  // RVA: 0x502F60
        static void SteamAPIDebugTextHook(int32_t nSeverity, StringBuilder* pchDebugText);  // RVA: 0x535DE0
        void Awake();  // RVA: 0x535210
        void Update();  // RVA: 0x535E50
        void OnDestroy();  // RVA: 0x535A10
        Il2CppString* GetPlayerName();  // RVA: 0x5359F0
        uint64_t GetSteamId();  // RVA: 0x535A00
        Texture2D* GetPlayerAvatar();  // RVA: 0x535820
        void RequestWebApiTicket();  // RVA: 0x535CE0
        void OnGetTicketForWebApiResponse(GetTicketForWebApiResponse_t response);  // RVA: 0x535AF0
        bool get_IsWebApiTicketReady();  // RVA: 0x535EF0
        bool get_IsWebApiTicketFailed();  // RVA: 0x535EE0
        bool get_IsWebApiTicketRequestInFlight();  // RVA: 0x535F00
        Il2CppString* get_WebApiTicketHex();  // RVA: 0x535F10
        System.Collections.Generic.List<System.ValueTuple<System.UInt64,System.String>> GetFriendsWithGame();  // RVA: 0x535670
        void .ctor();  // RVA: 0x4AEF60
    };

} // namespace AutoBattle.Steam

namespace AutoBattle.Save
{

    // Namespace: AutoBattle.Save
    class SaveData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t genderInt; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t level; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t xp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float stamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> inventory; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Save.EquipSlotSave> equippedSlots; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t currentSector; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        int32_t sectorEnemy; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        Boolean[][] sectorCleared; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        int32_t currentHp; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t nextUid; // 0x004C
    
        // Methods
        void .ctor();  // RVA: 0x54E960
    };

    // Namespace: AutoBattle.Save
    class EquipSlotSave
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* slotName; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t itemUid; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
        void .ctor(Il2CppString* slotName, int32_t itemUid);  // RVA: 0x5435E0
    };

} // namespace AutoBattle.Save

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Comparison<AutoBattle.Data.ItemInstance> <>9__4_0;


    // Methods
    static void .cctor();  // RVA: 0x559490
    void .ctor();  // RVA: 0x4BC430
    int32_t <BuildCanonicalString>b__4_0(ItemInstance* a, ItemInstance* b);  // RVA: 0x5575A0
};

namespace AutoBattle.Save
{

    // Namespace: AutoBattle.Save
    class SaveIntegrity
    {
    public:
        // Static fields
        // static Byte[][] _encodedKey;
    
    
        // Methods
        static Byte[][] DecodeKey();  // RVA: 0x54F880
        static Il2CppString* ComputeChecksum(PlayerState* state);  // RVA: 0x54F520
        static bool Verify(PlayerState* state, Il2CppString* storedChecksum);  // RVA: 0x54F9A0
        static Il2CppString* BuildCanonicalString(PlayerState* ps);  // RVA: 0x54EAB0
        static void .cctor();  // RVA: 0x54FA30
    };

    // Namespace: AutoBattle.Save
    class SaveSystem
    {
    public:
        // Static fields
        // static Il2CppString* LEGACY_PREFS_KEY;
        // static Il2CppString* LEGACY_PREFS_KEY_ALT;
        // static Action* OnTamperedSaveDetected;
    
    
        // Methods
        static Il2CppString* GetSavePath(uint64_t steamId);  // RVA: 0x54FE90
        static void Save(PlayerState* state, uint64_t steamId);  // RVA: 0x550970
        static PlayerState* Load(uint64_t steamId);  // RVA: 0x550110
        static Il2CppString* MigrateLegacyFields(Il2CppString* json);  // RVA: 0x5503A0
        static bool HasSave(uint64_t steamId);  // RVA: 0x550020
        static void Delete(uint64_t steamId);  // RVA: 0x54FCC0
        static int32_t ReadWipeGeneration(uint64_t steamId);  // RVA: 0x550750
        static void StampWipeGeneration(uint64_t steamId, int32_t generation);  // RVA: 0x550B40
        static Il2CppString* ReadOrMigrate(uint64_t steamId);  // RVA: 0x550540
        static PlayerState* TryRestoreFromBackup(uint64_t steamId);  // RVA: 0x550CC0
        static Il2CppString* ReadLegacyPrefs(uint64_t steamId);  // RVA: 0x550440
        static bool HasLegacyPrefs(uint64_t steamId);  // RVA: 0x54FF70
        static void DeleteLegacyPrefs(uint64_t steamId);  // RVA: 0x54FB90
        static void AtomicWrite(Il2CppString* path, Il2CppString* content);  // RVA: 0x54FAC0
        static void TryDelete(Il2CppString* path);  // RVA: 0x550BF0
    };

    // Namespace: AutoBattle.Save
    class SaveWrapper
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* payload; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* checksum; // 0x0018
    
        // Methods
        static Il2CppString* Wrap(PlayerState* state);  // RVA: 0x551210
        static UnwrapResult* Unwrap(Il2CppString* json);  // RVA: 0x550ED0
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Save
    class UnwrapResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        PlayerState* state; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        bool checksumValid; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* error; // 0x0020
    
        // Methods
        void .ctor(PlayerState* state, bool checksumValid, Il2CppString* error);  // RVA: 0x559570
    };

} // namespace AutoBattle.Save

// Namespace: <global>
class <>c__DisplayClass15_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GenerateFirstClearReward>b__0(ItemData* id);  // RVA: 0x5577A0
};

namespace AutoBattle.Progression
{

    // Namespace: AutoBattle.Progression
    class SectorProgressionManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Data.SectorData> sectors; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        PlayerState* playerState; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        GameManager* gameManager; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Data.SectorData> OnSectorChanged; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Action<AutoBattle.Data.SectorData,System.Boolean> OnSectorCleared; // 0x0040
    
        // Methods
        void add_OnSectorChanged(System.Action<AutoBattle.Data.SectorData> value);  // RVA: 0x551EC0
        void remove_OnSectorChanged(System.Action<AutoBattle.Data.SectorData> value);  // RVA: 0x552020
        void add_OnSectorCleared(System.Action<AutoBattle.Data.SectorData,System.Boolean> value);  // RVA: 0x551F70
        void remove_OnSectorCleared(System.Action<AutoBattle.Data.SectorData,System.Boolean> value);  // RVA: 0x5520D0
        void Start();  // RVA: 0x551DA0
        SectorData* GetCurrentSector();  // RVA: 0x551AA0
        Il2CppString* GetCurrentEnemyInfo();  // RVA: 0x551740
        void AdvanceEnemy();  // RVA: 0x551380
        void OnPlayerDeath();  // RVA: 0x551B30
        void OnSectorComplete();  // RVA: 0x551C00
        ItemInstance* GenerateFirstClearReward(int32_t sectorIndex);  // RVA: 0x551420
        Il2CppString* GetColorVariantName(int32_t colorVariant);  // RVA: 0x5516B0
        void .ctor();  // RVA: 0x4AEF60
    };

    // Namespace: AutoBattle.Progression
    class StaminaSystem : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        float regenRatePerSecond; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float maxStamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        System.Action<System.Single> OnStaminaChanged; // 0x0028
    
        // Methods
        void add_OnStaminaChanged(System.Action<System.Single> value);  // RVA: 0x5527F0
        void remove_OnStaminaChanged(System.Action<System.Single> value);  // RVA: 0x5528A0
        void Update();  // RVA: 0x552610
        bool ConsumeStamina(float amount);  // RVA: 0x552180
        bool HasEnoughStamina(float required);  // RVA: 0x552380
        float GetCurrentStamina();  // RVA: 0x5522E0
        void RestoreStamina();  // RVA: 0x5524A0
        void .ctor();  // RVA: 0x5527D0
    };

} // namespace AutoBattle.Progression

// Namespace: <global>
class <>c__DisplayClass5_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity fromRarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetRecipe>b__0(CraftingRecipe* r);  // RVA: 0x4D3430
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class CraftingSystem : public MonoBehaviour
    {
    public:
        // Static fields
        // static System.Collections.Generic.List<AutoBattle.Data.CraftingRecipe> recipes;
        // static bool recipesInitialized;
    
        uint8_t pad_0000[0x20]; // 0x0000
        InventoryManager* inventoryManager; // 0x0020
    
        // Methods
        void Start();  // RVA: 0x543250
        static void InitializeRecipes();  // RVA: 0x542EE0
        static CraftingRecipe* GetRecipe(Rarity fromRarity);  // RVA: 0x542DE0
        bool CanCraft(Rarity fromRarity, PlayerState* playerState);  // RVA: 0x542390
        ItemInstance* DoCraft(Rarity fromRarity, PlayerState* playerState, System.Func<AutoBattle.Data.Rarity,AutoBattle.Data.ItemInstance> generateItem);  // RVA: 0x542490
        int32_t GetAvailableCount(Rarity rarity, PlayerState* playerState);  // RVA: 0x542B10
        void .ctor();  // RVA: 0x4AEF60
        static void .cctor();  // RVA: 0x543360
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static Action* <>9__6_0;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__10_0;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__10_1;


    // Methods
    static void .cctor();  // RVA: 0x559500
    void .ctor();  // RVA: 0x4BC430
    void <Start>b__6_0();  // RVA: 0x557690
    bool <GetCompatibleItems>b__10_0(ItemInstance* i);  // RVA: 0x5575D0
    bool <GetCompatibleItems>b__10_1(ItemInstance* i);  // RVA: 0x5575F0
};

// Namespace: <global>
class <>c__DisplayClass10_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* otherEquipped; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetCompatibleItems>b__2(ItemInstance* i);  // RVA: 0x557750
};

// Namespace: <global>
class <>c__DisplayClass10_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquipSlot expectedSlot; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetCompatibleItems>b__3(ItemInstance* i);  // RVA: 0x557780
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class EquipmentManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Action* OnEquipChanged; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        String[][] SLOT_NAMES; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        PlayerState* playerState; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        InventoryManager* inventoryManager; // 0x0038
    
        // Methods
        void add_OnEquipChanged(Action* value);  // RVA: 0x544680
        void remove_OnEquipChanged(Action* value);  // RVA: 0x544720
        void Start();  // RVA: 0x544140
        void EquipItem(Il2CppString* slotName, ItemInstance* item);  // RVA: 0x543630
        void UnequipSlot(Il2CppString* slotName);  // RVA: 0x5443A0
        ItemInstance* GetEquippedItem(Il2CppString* slotName);  // RVA: 0x543E60
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetCompatibleItems(Il2CppString* slotName);  // RVA: 0x5439A0
        EquipSlot ParseSlotNameToEquipSlot(Il2CppString* slotName);  // RVA: 0x543FA0
        void .ctor();  // RVA: 0x5444F0
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Func<AutoBattle.Data.ItemInstance,System.Boolean> <>9__17_3;
    // static System.Func<AutoBattle.Data.ItemInstance,AutoBattle.Data.Rarity> <>9__17_0;


    // Methods
    static void .cctor();  // RVA: 0x559420
    void .ctor();  // RVA: 0x4BC430
    bool <GetItemsByFilter>b__17_3(ItemInstance* i);  // RVA: 0x5575D0
    Rarity <GetItemsByFilter>b__17_0(ItemInstance* i);  // RVA: 0x557620
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <RemoveItem>b__0(ItemInstance* i);  // RVA: 0x4D3430
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquipSlot slotEnum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetItemsByFilter>b__1(ItemInstance* i);  // RVA: 0x557780
};

// Namespace: <global>
class <>c__DisplayClass17_1
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarityEnum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetItemsByFilter>b__2(ItemInstance* i);  // RVA: 0x557B80
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetEquippedItems>b__0(ItemInstance* i);  // RVA: 0x4D3430
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class InventoryManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Action* OnInventoryChanged; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<System.String,AutoBattle.Data.ItemInstance> OnItemEquipped; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Action<System.String> OnItemUnequipped; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        System.Action<AutoBattle.Data.ItemInstance> OnItemCrafted; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        PlayerState* playerState; // 0x0040
    
        // Methods
        void add_OnInventoryChanged(Action* value);  // RVA: 0x549F80
        void remove_OnInventoryChanged(Action* value);  // RVA: 0x54A230
        void add_OnItemEquipped(System.Action<System.String,AutoBattle.Data.ItemInstance> value);  // RVA: 0x54A0D0
        void remove_OnItemEquipped(System.Action<System.String,AutoBattle.Data.ItemInstance> value);  // RVA: 0x54A380
        void add_OnItemUnequipped(System.Action<System.String> value);  // RVA: 0x54A180
        void remove_OnItemUnequipped(System.Action<System.String> value);  // RVA: 0x54A430
        void add_OnItemCrafted(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x54A020
        void remove_OnItemCrafted(System.Action<AutoBattle.Data.ItemInstance> value);  // RVA: 0x54A2D0
        void Start();  // RVA: 0x549F20
        void NotifyInventoryChanged();  // RVA: 0x549A00
        void AddItem(ItemInstance* item);  // RVA: 0x549130
        void RemoveItem(int32_t uid);  // RVA: 0x549A80
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetItemsByFilter(Il2CppString* filter);  // RVA: 0x5494B0
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> GetEquippedItems();  // RVA: 0x549200
        void SellItem(int32_t uid);  // RVA: 0x549F10
        void RaiseItemEquipped(Il2CppString* slot, ItemInstance* item);  // RVA: 0x549A40
        void RaiseItemUnequipped(Il2CppString* slot);  // RVA: 0x549A60
        void RaiseItemCrafted(ItemInstance* newItem);  // RVA: 0x549A20
        void .ctor();  // RVA: 0x4AEF60
    };

} // namespace AutoBattle.Inventory

// Namespace: <global>
class <>c__DisplayClass3_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Rarity rarity; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GenerateItem>b__0(ItemData* t);  // RVA: 0x5577A0
};

namespace AutoBattle.Inventory
{

    // Namespace: AutoBattle.Inventory
    class ItemGenerator : public MonoBehaviour
    {
    public:
        // Static fields
        // static ItemGenerator* instance;
    
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Data.ItemData> itemTemplates; // 0x0020
    
        // Methods
        void Awake();  // RVA: 0x54A830
        ItemInstance* GenerateItem(Rarity rarity, int32_t uid);  // RVA: 0x54AC00
        ItemInstance* GenerateItemBySector(SectorData* sector, int32_t uid);  // RVA: 0x54A9D0
        ItemInstance* GenerateItemByLevel(int32_t level, int32_t uid);  // RVA: 0x54A930
        ItemInstance* GenerateItemByLevel(int32_t level, int32_t uid, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54A970
        ItemInstance* GenerateItemBySector(SectorData* sector, int32_t uid, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54AB10
        Rarity RollRarityFromSector(SectorData* sector, int32_t sectorIndex, int32_t dropCountInSector0);  // RVA: 0x54B2C0
        Rarity RollRarityFromLevel(int32_t level);  // RVA: 0x54B0B0
        Rarity RollRarityFromLevelLegacy(int32_t level);  // RVA: 0x54AEF0
        void LoadTemplatesFromResources(Il2CppString* resourcePath);  // RVA: 0x54AE50
        System.Collections.Generic.List<AutoBattle.Data.ItemData> GetTemplates();  // RVA: 0x54ADE0
        void SetTemplates(System.Collections.Generic.List<AutoBattle.Data.ItemData> templates);  // RVA: 0x4ADCE0
        void .ctor();  // RVA: 0x54B390
    };

} // namespace AutoBattle.Inventory

namespace AutoBattle.Data
{

    // Namespace: AutoBattle.Data
    class CraftingRecipe
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Rarity fromRarity; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        Rarity toRarity; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t cost; // 0x0018
    
        // Methods
        void .ctor(Rarity from, Rarity to, int32_t cost);  // RVA: 0x542340
    };

    // Namespace: AutoBattle.Data
    class EnemyCategoryData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        Il2CppString* categoryName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* icon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<AutoBattle.Data.EnemyVariantData> variants; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Sprite[][] idleSprites; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float positionY; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float positionX; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        bool lungeEnabled; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t lungeStartFrame; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t lungeEndFrame; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        float biteImpactDelaySec; // 0x004C
    
        // Methods
        void .ctor();  // RVA: 0x543400
    };

    // Namespace: AutoBattle.Data
    class EnemyVariantData
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        EnemyColor color; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t hp; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float atk; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float def; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float crit; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float parry; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t level; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t xpBase; // 0x002C
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Data
    class FrameAnchorSet
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Vector2 head; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Vector2 body; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Vector2 weapon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Vector2 weapon2; // 0x0028
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Data
    class EquipAnchorData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        float pixelScaleReference; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        FrameAnchorSet[][] idleFrames; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        FrameAnchorSet[][] attackFrames; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        FrameAnchorSet[][] attack2Frames; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        FrameAnchorSet[][] attack3Frames; // 0x0038
    
        // Methods
        FrameAnchorSet* GetAnchors(bool isAttacking, int32_t frameIndex, int32_t attackVariant);  // RVA: 0x543490
        void .ctor();  // RVA: 0x543520
    };

    // Namespace: AutoBattle.Data
    class GameConstants
    {
    public:
        // Static fields
        // static int32_t BASE_HP;
        // static float BASE_ATK;
        // static float BASE_DEF;
        // static float BASE_CRIT;
        // static float BASE_PARRY;
        // static float LEVEL_SCALING_FACTOR;
        // static float XP_MULTIPLIER;
        // static float XP_EXPONENT;
        // static int32_t MAX_LEVEL;
        // static float XP_DEFEAT_MULTIPLIER;
        // static float XP_SCALING_PENALTY;
        // static float XP_SCALING_MIN;
        // static float DMG_RANDOM_MIN;
        // static float DMG_RANDOM_MAX;
        // static float CRIT_MULTIPLIER;
        // static float COMBAT_TURN_INTERVAL;
        // static Single[][] REGEN_BASELINE_PCT_BY_SECTOR;
        // static int32_t SAVE_WIPE_GENERATION;
        // static int32_t WIPE_GEN_FIELD_INTRODUCED;
        // static float STAMINA_COST_PER_BATTLE;
        // static float STAMINA_REGEN_PER_SEC;
        // static float STAMINA_MAX;
        // static float STAMINA_MIN_TO_BATTLE;
        // static float PVP_TIME_TRIGGER_SECONDS;
        // static int32_t PVP_XP_WIN;
        // static int32_t PVP_XP_LOSE;
        // static float PAUSE_BETWEEN_BATTLES;
        // static float PAUSE_BETWEEN_BATTLES_WITH_DROP;
        // static float PAUSE_AFTER_SECTOR_CLEAR;
        // static float PS_HP_WEIGHT;
        // static float PS_ATK_WEIGHT;
        // static float PS_DEF_WEIGHT;
        // static float PS_CRIT_WEIGHT;
        // static float PS_PARRY_WEIGHT;
        // static int32_t PITY_DROP_THRESHOLD;
        // static int32_t ARENA_ENEMIES_PER_WAVE;
        // static float PARRY_CAP;
        // static float CRIT_CAP;
        // static float MONO_SYNERGY_MULTIPLIER;
    
    
        // Methods
        static float GetRegenBaselinePct(int32_t sector);  // RVA: 0x5447C0
        static void .cctor();  // RVA: 0x5448A0
    };

    // Namespace: AutoBattle.Data
    struct Rarity
    {
    public:
        // Static fields
        // static Rarity Common;
        // static Rarity Rare;
        // static Rarity Epic;
        // static Rarity Legendary;
        // static Rarity Mythic;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct ElementCategory
    {
    public:
        // Static fields
        // static ElementCategory Nessuna;
        // static ElementCategory Arcane;
        // static ElementCategory Flame;
        // static ElementCategory Frost;
        // static ElementCategory Holy;
        // static ElementCategory Shadow;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct EquipSlot
    {
    public:
        // Static fields
        // static EquipSlot Testa;
        // static EquipSlot Corpo;
        // static EquipSlot Cintura;
        // static EquipSlot Arma;
        // static EquipSlot Anello1;
        // static EquipSlot Trinket;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct EnemyColor
    {
    public:
        // Static fields
        // static EnemyColor Verde;
        // static EnemyColor Giallo;
        // static EnemyColor Viola;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct CharacterType
    {
    public:
        // Static fields
        // static CharacterType Character1;
        // static CharacterType Character2;
        // static CharacterType Character3;
        // static CharacterType Character4;
        // static CharacterType Character5;
        // static CharacterType Character6;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    struct GameScreen
    {
    public:
        // Static fields
        // static GameScreen Creation;
        // static GameScreen Home;
        // static GameScreen Equip;
        // static GameScreen Inventory;
        // static GameScreen Battle;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    class ItemData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        int32_t id; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* itemName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        EquipSlot slot; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        Rarity rarity; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        ElementCategory category; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t hp; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float atk; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float def; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float crit; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float parry; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool isMelee; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<System.String> effects; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Sprite* icon; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Sprite* overlaySprite; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Sprite[][] overlayAnimFrames; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Sprite[][] iconAnimFrames; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        float overlayAnimFps; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        bool hasAttackOverlayAnim; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        Il2CppString* attackOverlaySpritesResource; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        float attackOverlayFps; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        AttackOverlayMode attackOverlayMode; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        Vector2 attackOverlayLocalOffset; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        bool hasProjectile; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        SpriteCollection* projectileSprites; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        SpriteCollection* projectileImpactSprites; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        Vector2 projectileSpawnOffset; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        Il2CppString* projectileSpritesResource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Il2CppString* projectileImpactSpritesResource; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        float projectileTravelTime; // 0x00C8
        uint8_t pad_00C9[0x3]; // 0x00C9
        float projectileSize; // 0x00CC
        uint8_t pad_00CD[0x3]; // 0x00CD
        float projectileImpactSize; // 0x00D0
        uint8_t pad_00D1[0x3]; // 0x00D1
        float projectileImpactDuration; // 0x00D4
        uint8_t pad_00D5[0x3]; // 0x00D5
        float projectileArcHeight; // 0x00D8
        uint8_t pad_00D9[0x3]; // 0x00D9
        int32_t projectileCountPerAttack; // 0x00DC
        uint8_t pad_00DD[0x3]; // 0x00DD
        float projectileSpreadOffset; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float projectileSpreadDelay; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool projectileRotateToDirection; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        Color projectileTint; // 0x00EC
        uint8_t pad_00ED[0xF]; // 0x00ED
        Color projectileImpactTint; // 0x00FC
        uint8_t pad_00FD[0xF]; // 0x00FD
        float projectileSpawnDelay; // 0x010C
    
        // Methods
        SpriteCollection* GetProjectileSprites();  // RVA: 0x54A590
        SpriteCollection* GetProjectileImpactSprites();  // RVA: 0x54A4E0
        void .ctor();  // RVA: 0x54A640
    };

    // Namespace: AutoBattle.Data
    struct AttackOverlayMode
    {
    public:
        // Static fields
        // static AttackOverlayMode ReplaceWeaponSprite;
        // static AttackOverlayMode OverlayAbove;
    
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t value__; // 0x0010
    };

    // Namespace: AutoBattle.Data
    class ItemInstance
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t uid; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t templateId; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        Il2CppString* itemName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        EquipSlot slot; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        Rarity rarity; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        ElementCategory category; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t hp; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        float atk; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float def; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float crit; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float parry; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        String[][] effects; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        bool isNew; // 0x0048
    
        // Methods
        bool IsShield();  // RVA: 0x54B640
        static bool IsShieldName(Il2CppString* name);  // RVA: 0x54B510
        static ItemInstance* FromTemplate(ItemData* template, int32_t uniqueId);  // RVA: 0x54B410
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Data
    struct PlayerStats
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t hp; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float atk; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        float def; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float crit; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float parry; // 0x0020
    
        // Methods
        static PlayerStats get_Zero();  // RVA: 0x54E950
    };

    // Namespace: AutoBattle.Data
    class SectorData : public ScriptableObject
    {
    public:
        uint8_t pad_0000[0x18]; // 0x0000
        int32_t sectorId; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* sectorName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t totalEnemies; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Data.EnemyCategoryData> categories; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float commonDropPct; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float rareDropPct; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float epicDropPct; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float legendaryDropPct; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        float mythicDropPct; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        Rarity clearRewardRarity; // 0x004C
    
        // Methods
        int32_t get_PhaseSize();  // RVA: 0x5512E0
        void .ctor();  // RVA: 0x4B6220
    };

    // Namespace: AutoBattle.Data
    class TooltipSettings : public ScriptableObject
    {
    public:
        // Static fields
        // static TooltipSettings* _instance;
    
        uint8_t pad_0000[0x18]; // 0x0000
        float effectIndent; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float effectLineHeight; // 0x001C
    
        // Methods
        float get_EffectIndent();  // RVA: 0x556D30
        float get_EffectLineHeight();  // RVA: 0x556D40
        static TooltipSettings* get_Instance();  // RVA: 0x556D50
        void .ctor();  // RVA: 0x556D10
    };

} // namespace AutoBattle.Data

// Namespace: <global>
class <CrossfadeCoroutine>d__23
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AmbienceManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    AudioClip* newClip; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    AudioSource* <fadingOut>5__2; // 0x0030
    uint8_t pad_0031[0x7]; // 0x0031
    AudioSource* <fadingIn>5__3; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float <duration>5__4; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    float <elapsed>5__5; // 0x0044

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x556E20
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x557190
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class AmbienceManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AmbienceManager* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioClip* homeClip; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip* outskirtsClip; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioClip* graveyardClip; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AudioClip* forestClip; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        float crossfadeDuration; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        float baseVolume; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        AudioSource* sourceA; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        AudioSource* sourceB; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AudioSource* activeSrc; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Coroutine* crossfadeCoroutine; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        AudioClip* currentClip; // 0x0068
    
        // Methods
        static AmbienceManager* get_Instance();  // RVA: 0x541170
        static void set_Instance(AmbienceManager* value);  // RVA: 0x5411B0
        void Awake();  // RVA: 0x5409D0
        void EnsureSourceDefaults(AudioSource* src);  // RVA: 0x540F20
        void EnsureMixerRouting();  // RVA: 0x540D10
        void PlaySectorAmbience(int32_t sectorIndex);  // RVA: 0x541100
        void PlayHomeAmbience();  // RVA: 0x5410F0
        void StopAmbience();  // RVA: 0x541140
        AudioClip* GetClipForSector(int32_t sectorIndex);  // RVA: 0x5410D0
        void CrossfadeTo(AudioClip* newClip);  // RVA: 0x540BF0
        IEnumerator* CrossfadeCoroutine(AudioClip* newClip);  // RVA: 0x540B60
        void .ctor();  // RVA: 0x541150
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <FadeHomeMusicCoroutine>d__63
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    AudioManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    float targetVolume; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float <startVolume>5__2; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <duration>5__3; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    float <elapsed>5__4; // 0x0034

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x5571D0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x557380
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class AudioManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static AudioManager* <Instance>k__BackingField;
        // static Il2CppString* KEY_MUSIC;
        // static Il2CppString* KEY_SFX;
        // static Il2CppString* KEY_MUTE;
        // static Il2CppString* PARAM_MUSIC;
        // static Il2CppString* PARAM_SFX;
        // static float MIN_LINEAR;
        // static float MIN_DB;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioMixer* mixer; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioMixerGroup* musicMixerGroup; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        AudioMixerGroup* sfxMixerGroup; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float musicVolume; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float sfxVolume; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        bool isMuted; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        AudioSource* musicSource; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool itemPopupToggle; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        AudioClip* damageSfx; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        AudioClip* parrySfx; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        AudioClip* enemyKillSfx; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        AudioClip* playerDeathSfx; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        AudioClip* levelCompleteSfx; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        AudioClip* vsSfx; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        AudioClip* attackSfx1; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        AudioClip* attackSfx2; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        AudioClip* itemPopupSfx1; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        AudioClip* itemPopupSfx2; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        AudioClip* homeMusic; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        float homeMusicVolume; // 0x00B0
        uint8_t pad_00B1[0x3]; // 0x00B1
        float homeMusicFadeDuration; // 0x00B4
        uint8_t pad_00B5[0x3]; // 0x00B5
        AudioSource* homeMusicSource; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        Coroutine* homeMusicFadeCoroutine; // 0x00C0
    
        // Methods
        static AudioManager* get_Instance();  // RVA: 0x542280
        static void set_Instance(AudioManager* value);  // RVA: 0x5422E0
        float get_MusicVolume();  // RVA: 0x5422C0
        float get_SFXVolume();  // RVA: 0x5422D0
        bool get_IsMuted();  // RVA: 0x535EF0
        AudioMixerGroup* get_MusicMixerGroup();  // RVA: 0x532C90
        AudioMixerGroup* get_SFXMixerGroup();  // RVA: 0x532CA0
        void Awake();  // RVA: 0x541330
        void SetMusicVolume(float value);  // RVA: 0x541F70
        void SetSFXVolume(float value);  // RVA: 0x542070
        void SetMuteAll(bool muted);  // RVA: 0x542000
        void RegisterMusicSource(AudioSource* source);  // RVA: 0x541E40
        void PlaySFX(AudioClip* clip);  // RVA: 0x541B40
        void PlayDamageSfx();  // RVA: 0x541960
        void PlayParrySfx();  // RVA: 0x541B20
        void PlayEnemyKillSfx();  // RVA: 0x541970
        void PlayPlayerDeathSfx();  // RVA: 0x541B30
        void PlayLevelCompleteSfx();  // RVA: 0x541B10
        void PlayAttackSfx1();  // RVA: 0x541940
        void PlayAttackSfx2();  // RVA: 0x541950
        void PlayItemPopupSfx();  // RVA: 0x541AD0
        void PlayVsSfx();  // RVA: 0x541E30
        void EnsureHomeMusicSourceDefaults();  // RVA: 0x541660
        void PlayHomeMusic();  // RVA: 0x541980
        void StopHomeMusic();  // RVA: 0x5421C0
        void StartHomeMusicFade(float targetVolume);  // RVA: 0x542100
        IEnumerator* FadeHomeMusicCoroutine(float targetVolume);  // RVA: 0x5417C0
        void ApplyVolumes();  // RVA: 0x541210
        static float LinearToDb(float linear);  // RVA: 0x541840
        void SaveSettings();  // RVA: 0x541F00
        void LoadSettings();  // RVA: 0x5418A0
        void .ctor();  // RVA: 0x542250
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <>c
{
public:
    // Static fields
    // static <>c* <>9;
    // static System.Predicate<AutoBattle.Data.ItemData> <>9__69_0;


    // Methods
    static void .cctor();  // RVA: 0x5593B0
    void .ctor();  // RVA: 0x4BC430
    bool <StartNewGame>b__69_0(ItemData* item);  // RVA: 0x557640
};

// Namespace: <global>
class <>c__DisplayClass73_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    ItemInstance* item; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <RefreshInventoryNames>b__0(ItemData* t);  // RVA: 0x4BC400
};

// Namespace: <global>
class <Start>d__57
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    GameManager* <>4__this; // 0x0020

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x5573C0
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x557560
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class GameManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static GameManager* <Instance>k__BackingField;
        // static float SNAPSHOT_REFRESH_INTERVAL_SEC;
        // static bool <DebugFastPvP>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        bool isDemo; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<AutoBattle.Data.SectorData> sectors; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        PlayerState* playerState; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        GameScreen currentScreen; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        ItemGenerator* itemGenerator; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Action<AutoBattle.Data.GameScreen> OnScreenChanged; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Action* OnGameStateChanged; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Action* OnEquipmentChanged; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        Action* OnStartPvEBattle; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        Action* OnStartPvPBattle; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Action<AutoBattle.Data.GameScreen> OnScreenChange; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Action<System.String,System.String> OnNotification; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Action<System.Boolean> OnBattleStateChange; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        Action* OnStaminaDepleted; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        System.Action<System.String> OnSteamInitialized; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        float pvpTimer; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        float snapshotRefreshTimer; // 0x00A4
    
        // Methods
        static GameManager* get_Instance();  // RVA: 0x5488B0
        static void set_Instance(GameManager* value);  // RVA: 0x5490D0
        static bool get_IsDemo();  // RVA: 0x5488F0
        static int32_t get_EffectiveMaxLevel();  // RVA: 0x548830
        int32_t get_EffectiveSectorCount();  // RVA: 0x548860
        void add_OnScreenChanged(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x548480
        void remove_OnScreenChanged(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x548D30
        void add_OnGameStateChanged(Action* value);  // RVA: 0x548270
        void remove_OnGameStateChanged(Action* value);  // RVA: 0x548B20
        void add_OnEquipmentChanged(Action* value);  // RVA: 0x5481D0
        void remove_OnEquipmentChanged(Action* value);  // RVA: 0x548A80
        void add_OnStartPvEBattle(Action* value);  // RVA: 0x5485E0
        void remove_OnStartPvEBattle(Action* value);  // RVA: 0x548E90
        void add_OnStartPvPBattle(Action* value);  // RVA: 0x548680
        void remove_OnStartPvPBattle(Action* value);  // RVA: 0x548F30
        void add_OnScreenChange(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x5483D0
        void remove_OnScreenChange(System.Action<AutoBattle.Data.GameScreen> value);  // RVA: 0x548C80
        void add_OnNotification(System.Action<System.String,System.String> value);  // RVA: 0x548310
        void remove_OnNotification(System.Action<System.String,System.String> value);  // RVA: 0x548BC0
        void add_OnBattleStateChange(System.Action<System.Boolean> value);  // RVA: 0x548110
        void remove_OnBattleStateChange(System.Action<System.Boolean> value);  // RVA: 0x5489C0
        void add_OnStaminaDepleted(Action* value);  // RVA: 0x548530
        void remove_OnStaminaDepleted(Action* value);  // RVA: 0x548DE0
        void add_OnSteamInitialized(System.Action<System.String> value);  // RVA: 0x548720
        void remove_OnSteamInitialized(System.Action<System.String> value);  // RVA: 0x548FD0
        System.Collections.Generic.List<AutoBattle.Data.ItemData> get_AllItems();  // RVA: 0x532C90
        System.Collections.Generic.List<AutoBattle.Data.SectorData> get_Sectors();  // RVA: 0x532CA0
        GameScreen get_CurrentScreen();  // RVA: 0x5487E0
        ItemGenerator* get_ItemGenerator();  // RVA: 0x5489B0
        void Awake();  // RVA: 0x544980
        void ApplyForcedSaveWipeIfNeeded();  // RVA: 0x544930
        void DeduplicateAllItems();  // RVA: 0x545670
        IEnumerator* Start();  // RVA: 0x547BA0
        static bool get_DebugFastPvP();  // RVA: 0x5487F0
        static void set_DebugFastPvP(bool value);  // RVA: 0x549090
        void Update();  // RVA: 0x547CD0
        void TriggerPvPBattle();  // RVA: 0x547CA0
        void ShowScreen(GameScreen screen);  // RVA: 0x547400
        void ClearNewBadges();  // RVA: 0x544FF0
        void StartNewGame(Il2CppString* name, CharacterType characterType);  // RVA: 0x547510
        void ResetGame();  // RVA: 0x547150
        void SaveGame();  // RVA: 0x5473A0
        void LoadGame();  // RVA: 0x5468A0
        void RefreshInventoryNames();  // RVA: 0x546E90
        SectorData* GetCurrentSector();  // RVA: 0x545A00
        bool IsBattleActive();  // RVA: 0x5466E0
        void StartBattle();  // RVA: 0x547460
        void StopBattle();  // RVA: 0x547C10
        void GoToEquipScreen();  // RVA: 0x545CD0
        void GoToInventoryScreen();  // RVA: 0x545D30
        bool IsGameOver();  // RVA: 0x546700
        void RequestNextBattle();  // RVA: 0x547110
        void DebugSetSector(int32_t sectorIndex);  // RVA: 0x545420
        void DebugEnterArena();  // RVA: 0x545100
        void DebugSelectSectorOrArena(int32_t index);  // RVA: 0x545260
        void ShowNotification(Il2CppString* message, Il2CppString* type);  // RVA: 0x5473E0
        void OnApplicationQuit();  // RVA: 0x546B90
        void OnDisable();  // RVA: 0x546BD0
        void OnApplicationPause(bool pauseStatus);  // RVA: 0x546B40
        void InitializeWindowManager();  // RVA: 0x546360
        void InitializeAudioManager();  // RVA: 0x545D90
        void InitializePlayFab();  // RVA: 0x545E70
        void OnPlayFabLoginSuccess();  // RVA: 0x546C60
        void InitializeRanking();  // RVA: 0x546150
        void OnPlayFabLoginFailed(Il2CppString* error);  // RVA: 0x546BE0
        void NotifySnapshotUpload();  // RVA: 0x546A30
        void NotifyEquipmentChanged();  // RVA: 0x546A10
        bool IsPlayFabAvailable();  // RVA: 0x546720
        void EnsureCanvasScalerDPI();  // RVA: 0x545970
        void InitializeSteam();  // RVA: 0x546280
        Il2CppString* GetSteamPlayerName();  // RVA: 0x545BA0
        uint64_t GetSteamId();  // RVA: 0x545AA0
        bool IsSteamAvailable();  // RVA: 0x5467E0
        void .ctor();  // RVA: 0x548040
    };

    // Namespace: AutoBattle.Core
    class LocalizationManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static LocalizationManager* _instance;
        // static Il2CppString* PREF_LANGUAGE_INDEX;
        // static Il2CppString* DEFAULT_LANGUAGE_CODE;
        // static Il2CppString* RESOURCES_FOLDER;
        // static bool _isQuitting;
        // static String[][] LanguageCodes;
    
        uint8_t pad_0000[0x20]; // 0x0000
        System.Collections.Generic.Dictionary<System.String,System.String> entries; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Collections.Generic.Dictionary<System.String,System.String> fallbackEntries; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Il2CppString* currentLanguageCode; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        bool isLoaded; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.HashSet<System.String> warnedMissingKeys; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Action* OnLanguageChanged; // 0x0048
    
        // Methods
        static void ResetStatics();  // RVA: 0x54C940
        static LocalizationManager* get_Instance();  // RVA: 0x54D460
        void add_OnLanguageChanged(Action* value);  // RVA: 0x54D370
        void remove_OnLanguageChanged(Action* value);  // RVA: 0x54D6E0
        Il2CppString* get_CurrentLanguage();  // RVA: 0x532CA0
        bool get_IsLoaded();  // RVA: 0x54D6D0
        static System.Collections.Generic.IReadOnlyList<System.String> get_AvailableLanguages();  // RVA: 0x54D410
        void Awake();  // RVA: 0x54B770
        void OnApplicationQuit();  // RVA: 0x54C810
        void OnDestroy();  // RVA: 0x54C860
        void EnsureLoaded();  // RVA: 0x54B940
        void SetLanguage(Il2CppString* langCode);  // RVA: 0x54CC60
        void SetLanguageByIndex(int32_t index);  // RVA: 0x54CA80
        static System.Collections.Generic.List<System.Int32> GetAvailableLanguageIndices();  // RVA: 0x54BA50
        Il2CppString* Get(Il2CppString* key);  // RVA: 0x54C140
        Il2CppString* Get(Il2CppString* key, Object[][] args);  // RVA: 0x54C3D0
        Il2CppString* GetEffectText(Il2CppString* canonicalEnglishEffect);  // RVA: 0x54BC00
        static Il2CppString* ComputeEffectSlug(Il2CppString* canonical);  // RVA: 0x54B8F0
        Il2CppString* GetItemName(Il2CppString* canonicalEnglishName);  // RVA: 0x54BEA0
        Il2CppString* GetEnemyName(Il2CppString* canonicalEnglishName);  // RVA: 0x54BD50
        Il2CppString* GetSectorName(Il2CppString* canonicalEnglishName);  // RVA: 0x54BFF0
        void LoadLanguageInternal(Il2CppString* langCode);  // RVA: 0x54C710
        static System.Collections.Generic.Dictionary<System.String,System.String> LoadLanguageDictionary(Il2CppString* langCode);  // RVA: 0x54C4C0
        static Il2CppString* ResolveCodeFromIndex(int32_t index);  // RVA: 0x54C9C0
        static Il2CppString* Slugify(Il2CppString* source);  // RVA: 0x54CE00
        void .ctor();  // RVA: 0x54D280
        static void .cctor();  // RVA: 0x54CFD0
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <>c__DisplayClass39_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetEquippedItem>b__0(ItemInstance* item);  // RVA: 0x4D3430
};

// Namespace: <global>
class <>c__DisplayClass42_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* item; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetElementSynergies>b__0(ItemInstance* it);  // RVA: 0x4D3430
    bool <GetElementSynergies>b__1(ItemData* it);  // RVA: 0x4D3450
};

// Namespace: <global>
class <>c__DisplayClass43_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetItemByUid>b__0(ItemInstance* item);  // RVA: 0x4D3430
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class PlayerState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        CharacterType characterType; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        int32_t level; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t xp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float stamina; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t currentSector; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t sectorEnemy; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        Boolean[][] sectorCleared; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        int32_t currentHp; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> inventory; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        System.Collections.Generic.List<System.String> equippedSlots; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        System.Collections.Generic.List<System.Int32> equippedUids; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        float lastPvPTime; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        bool battleActive; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        int32_t nextUid; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        float totalBattleTime; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t sector0DropCount; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        int32_t killsWithoutDrop; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        int32_t appliedWipeGeneration; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        bool endlessMode; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        int32_t waveIndex; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        int32_t waveKillCount; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        int32_t maxWaveRecord; // 0x0080
        uint8_t pad_0081[0x3]; // 0x0081
        int32_t unspentStatPoints; // 0x0084
        uint8_t pad_0085[0x3]; // 0x0085
        int32_t allocatedHp; // 0x0088
        uint8_t pad_0089[0x3]; // 0x0089
        int32_t allocatedAtk; // 0x008C
        uint8_t pad_008D[0x3]; // 0x008D
        int32_t allocatedDef; // 0x0090
        uint8_t pad_0091[0x3]; // 0x0091
        int32_t allocatedCrit; // 0x0094
        uint8_t pad_0095[0x3]; // 0x0095
        int32_t allocatedParry; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        Il2CppString* runId; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        float sectorEnteredBattleTime; // 0x00A8
        uint8_t pad_00A9[0x3]; // 0x00A9
        int32_t deathsInSectorPersistent; // 0x00AC
    
        // Methods
        void EnsureAnalyticsRunFields();  // RVA: 0x54D820
        System.Collections.Generic.Dictionary<System.String,System.Int32> get_equipped();  // RVA: 0x54E580
        void set_equipped(System.Collections.Generic.Dictionary<System.String,System.Int32> value);  // RVA: 0x54E6A0
        System.Collections.Generic.List<AutoBattle.Data.ItemInstance> get_Inventory();  // RVA: 0x54E570
        int32_t GenerateUid();  // RVA: 0x54DA60
        ItemInstance* GetEquippedItem(Il2CppString* slot);  // RVA: 0x54E040
        void EquipItem(Il2CppString* slot, ItemInstance* item);  // RVA: 0x54D8C0
        void UnequipSlot(Il2CppString* slot);  // RVA: 0x54E3B0
        System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> GetElementSynergies(System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x54DA70
        ItemInstance* GetItemByUid(int32_t uid);  // RVA: 0x54E180
        bool IsItemEquipped(int32_t uid);  // RVA: 0x54E260
        int32_t AddXP(int32_t amount);  // RVA: 0x54D780
        void .ctor();  // RVA: 0x54E460
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class BelowHpEffect
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float thresholdPct; // 0x0010
    uint8_t pad_0011[0x3]; // 0x0011
    float bonusAtkPct; // 0x0014
    uint8_t pad_0015[0x3]; // 0x0015
    float bonusDefPct; // 0x0018
    uint8_t pad_0019[0x3]; // 0x0019
    float bonusCritPct; // 0x001C
    uint8_t pad_001D[0x3]; // 0x001D
    int32_t regenHpPerTick; // 0x0020
    uint8_t pad_0021[0x3]; // 0x0021
    bool immune; // 0x0024
    uint8_t pad_0025[0x3]; // 0x0025
    int32_t immuneSeconds; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float lifeStealPct; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float absorbDamagePct; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t bonusAtkFlat; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    int32_t bonusToAllStatsFlat; // 0x0038
    uint8_t pad_0039[0x3]; // 0x0039
    int32_t bonusDamagePerAttack; // 0x003C
    uint8_t pad_003D[0x3]; // 0x003D
    int32_t regenPerAttack; // 0x0040
    uint8_t pad_0041[0x3]; // 0x0041
    int32_t regenPerCrit; // 0x0044
    uint8_t pad_0045[0x3]; // 0x0045
    float attackLifestealPct; // 0x0048
    uint8_t pad_0049[0x3]; // 0x0049
    bool immuneToCrits; // 0x004C
    uint8_t pad_004D[0x3]; // 0x004D
    float permanentDefPct; // 0x0050

    // Methods
    void .ctor();  // RVA: 0x4BC430
};

// Namespace: <global>
class <>c__DisplayClass11_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <GetTotalStats>b__0(ItemInstance* item);  // RVA: 0x4D3430
    bool <GetTotalStats>b__1(ItemData* item);  // RVA: 0x4D3450
};

// Namespace: <global>
class <>c__DisplayClass16_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <CalcRegenPerFight>b__0(ItemInstance* item);  // RVA: 0x4D3430
    bool <CalcRegenPerFight>b__1(ItemData* item);  // RVA: 0x4D3450
};

// Namespace: <global>
class <>c__DisplayClass17_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* pattern; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> result; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcTimedRegen>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5577C0
};

// Namespace: <global>
class <>c__DisplayClass18_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    Il2CppString* pattern; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> result; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcEveryNSecTemporaryBuffs>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x557BA0
};

// Namespace: <global>
class <>c__DisplayClass19_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t idx; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Int32[][] caps; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcEveryNSecMaxStack>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x557FD0
};

// Namespace: <global>
class <>c__DisplayClass20_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcEveryNAttacks>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5582C0
};

// Namespace: <global>
class <>c__DisplayClass21_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcEveryNCrits>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x558A30
};

// Namespace: <global>
class <>c__DisplayClass22_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnCritBonusDamage>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x558C80
};

// Namespace: <global>
class <>c__DisplayClass23_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnCritPendingMods>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x558FF0
};

// Namespace: <global>
class <>c__DisplayClass24_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnCritEnemyDefDebuff>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x563540
};

// Namespace: <global>
class <>c__DisplayClass25_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnCritDefTimed>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x563700
};

// Namespace: <global>
class <>c__DisplayClass26_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnParryPendingMods>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x563900
};

// Namespace: <global>
class <>c__DisplayClass27_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnParryDefTimed>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x564120
};

// Namespace: <global>
class <>c__DisplayClass28_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcFirstHitHeal>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x564420
};

// Namespace: <global>
class <>c__DisplayClass29_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sum; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcFirstHitPermanentAtkPct>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x564710
};

// Namespace: <global>
class <>c__DisplayClass30_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t uid; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    ItemInstance* instance; // 0x0018

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <ForEachEquippedEffect>b__0(ItemInstance* item);  // RVA: 0x4D3430
    bool <ForEachEquippedEffect>b__1(ItemData* item);  // RVA: 0x4D3450
};

// Namespace: <global>
class <>c__DisplayClass31_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcStaminaCostMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5648A0
};

// Namespace: <global>
class <>c__DisplayClass32_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcStaminaRestRegenMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5649E0
};

// Namespace: <global>
class <>c__DisplayClass33_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcBonusDropChance>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x564B20
};

// Namespace: <global>
class <>c__DisplayClass34_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float sumPct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcEnemyCritDamageReductionMultiplier>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x564C60
};

// Namespace: <global>
class <>c__DisplayClass36_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> result; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcBelowHpEffects>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x564DA0
};

// Namespace: <global>
class <>c__DisplayClass37_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnCritHealAmount>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5662E0
};

// Namespace: <global>
class <>c__DisplayClass38_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float pct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnCritLifesteal>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566590
};

// Namespace: <global>
class <>c__DisplayClass39_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcOnParryHealAmount>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566880
};

// Namespace: <global>
class <>c__DisplayClass40_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    float pct; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcFirstHitAbsorbFraction>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x566B30
};

// Namespace: <global>
class <>c__DisplayClass41_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t total; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcFirstHitCounterDamage>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x567110
};

// Namespace: <global>
class <>c__DisplayClass42_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> list; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    void <CalcEveryNHitsTaken>b__0(ItemData* data, Il2CppString* effect);  // RVA: 0x5673C0
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class StatsCalculator
    {
    public:
        // Static fields
        // static int32_t BaseHP;
        // static int32_t BaseATK;
        // static int32_t BaseDEF;
        // static float BaseCRIT;
        // static float BasePARRY;
        // static float AtkPerPoint;
        // static float HpPerPoint;
        // static float DefPerPoint;
        // static float CritPercentPerPoint;
        // static float ParryPercentPerPoint;
    
    
        // Methods
        static PlayerStats GetBaseStats(int32_t level);  // RVA: 0x555D90
        static PlayerStats GetTotalStats(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555F40
        static void ApplySynergyBonuses(Il2CppString* effectDescription, System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> elementalCounts, PlayerStats stats);  // RVA: 0x553190
        static void ApplyCrossSynergyBonuses(Il2CppString* effectDescription, System.Collections.Generic.Dictionary<AutoBattle.Data.ElementCategory,System.Int32> elementalCounts, System.Collections.Generic.HashSet<System.String> equippedItemNames, bool hasDualWield, bool hasShield, int32_t categoryCount, PlayerStats stats);  // RVA: 0x552950
        static ElementCategory GetCategoryFromName(Il2CppString* name);  // RVA: 0x555DC0
        static int32_t GetPowerScore(PlayerStats stats);  // RVA: 0x555EE0
        static int32_t CalcRegenPerFight(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554F80
        static System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> CalcTimedRegen(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555810
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> CalcEveryNSecTemporaryBuffs(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554070
        static Int32[][] CalcEveryNSecMaxStack(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> everyNSecTempBuffs);  // RVA: 0x553F30
        static System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> CalcEveryNAttacks(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553B80
        static System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> CalcEveryNCrits(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553CC0
        static int32_t CalcOnCritBonusDamage(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5545C0
        static System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> CalcOnCritPendingMods(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554B00
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnCritEnemyDefDebuff(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5547E0
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnCritDefTimed(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5546B0
        static System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> CalcOnParryPendingMods(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554E50
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> CalcOnParryDefTimed(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554C30
        static int32_t CalcFirstHitHeal(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5543E0
        static float CalcFirstHitPermanentAtkPct(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5544D0
        static void ForEachEquippedEffect(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, System.Action<AutoBattle.Data.ItemData,System.String> callback);  // RVA: 0x555970
        static float CalcStaminaCostMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5555D0
        static float CalcStaminaRestRegenMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x555700
        static float CalcBonusDropChance(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553950
        static float CalcEnemyCritDamageReductionMultiplier(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553A50
        static System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> CalcBelowHpEffects(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553820
        static int32_t CalcOnCritHealAmount(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554910
        static float CalcOnCritLifesteal(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554A00
        static int32_t CalcOnParryHealAmount(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x554D60
        static float CalcFirstHitAbsorbFraction(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5541D0
        static int32_t CalcFirstHitCounterDamage(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x5542F0
        static System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> CalcEveryNHitsTaken(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems);  // RVA: 0x553E00
        static void .cctor();  // RVA: 0x556C80
    };

    // Namespace: AutoBattle.Core
    class TransparentWindowHelper : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        Camera* targetCamera; // 0x0020
    
        // Methods
        void OnEnable();  // RVA: 0x560190
        void OnDisable();  // RVA: 0x560120
        void OnEndCameraRendering(ScriptableRenderContext context, Camera* camera);  // RVA: 0x560230
        void .ctor();  // RVA: 0x4AEF60
    };

    // Namespace: AutoBattle.Core
    class UIAudioManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static UIAudioManager* <Instance>k__BackingField;
    
        uint8_t pad_0000[0x20]; // 0x0000
        AudioClip* clickClip; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        AudioClip* hoverClip; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        Vector2 hoverPitchRange; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        AudioSource* uiSource; // 0x0038
    
        // Methods
        static UIAudioManager* get_Instance();  // RVA: 0x568110
        static void set_Instance(UIAudioManager* value);  // RVA: 0x568150
        void Awake();  // RVA: 0x567A80
        void EnsureSourceDefaults();  // RVA: 0x567D70
        void EnsureMixerRouting();  // RVA: 0x567BF0
        void PlayClick();  // RVA: 0x567F40
        void PlayHover();  // RVA: 0x568010
        void .ctor();  // RVA: 0x5680F0
    };

} // namespace AutoBattle.Core

// Namespace: <global>
struct WindowSize
{
public:
    // Static fields
    // static WindowSize Small;
    // static WindowSize Medium;
    // static WindowSize Large;
    // static WindowSize XLarge;

    uint8_t pad_0000[0x10]; // 0x0000
    int32_t value__; // 0x0010
};

namespace AutoBattle.Core
{

    // Namespace: AutoBattle.Core
    class WindowManager : public MonoBehaviour
    {
    public:
        // Static fields
        // static WindowManager* <Instance>k__BackingField;
        // static float GAME_FRAME_REF_WIDTH;
        // static float GAME_FRAME_REF_HEIGHT;
        // static int32_t SNAP_MARGIN_PX;
        // static Vector2Int[][] SizePresets;
        // static Color ColorKey;
    
        uint8_t pad_0000[0x20]; // 0x0000
        WindowSize <CurrentSize>k__BackingField; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        System.Action<AutoBattle.Core.WindowManager.WindowSize> OnWindowSizeChanged; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t <SidePanelWidth>k__BackingField; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t <TooltipOverflowWidth>k__BackingField; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        System.Action<System.Int32> OnSidePanelWidthChanged; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool <IsTransparencyEnabled>k__BackingField; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        RectTransform* <GameFrameRoot>k__BackingField; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        bool isInitialized; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        UniWindowController* _uniWin; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        CanvasScaler* _canvasScaler; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        CanvasScaler* _worldCanvasScaler; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        int32_t _currentMonitorIdx; // 0x0070
    
        // Methods
        static WindowManager* get_Instance();  // RVA: 0x569F50
        static void set_Instance(WindowManager* value);  // RVA: 0x56A140
        WindowSize get_CurrentSize();  // RVA: 0x569F30
        void set_CurrentSize(WindowSize value);  // RVA: 0x56A120
        void add_OnWindowSizeChanged(System.Action<AutoBattle.Core.WindowManager.WindowSize> value);  // RVA: 0x569D30
        void remove_OnWindowSizeChanged(System.Action<AutoBattle.Core.WindowManager.WindowSize> value);  // RVA: 0x56A070
        int32_t get_SidePanelWidth();  // RVA: 0x569FA0
        void set_SidePanelWidth(int32_t value);  // RVA: 0x56A1C0
        int32_t get_TooltipOverflowWidth();  // RVA: 0x569FB0
        void set_TooltipOverflowWidth(int32_t value);  // RVA: 0x56A1D0
        int32_t get_EffectiveLeftExtension();  // RVA: 0x569F40
        void add_OnSidePanelWidthChanged(System.Action<System.Int32> value);  // RVA: 0x569C80
        void remove_OnSidePanelWidthChanged(System.Action<System.Int32> value);  // RVA: 0x569FC0
        bool get_IsTransparencyEnabled();  // RVA: 0x535EF0
        void set_IsTransparencyEnabled(bool value);  // RVA: 0x56A1B0
        RectTransform* get_GameFrameRoot();  // RVA: 0x5489B0
        void set_GameFrameRoot(RectTransform* value);  // RVA: 0x56A130
        RectTransform* get_CanvasRect();  // RVA: 0x569DE0
        void Awake();  // RVA: 0x568420
        void Start();  // RVA: 0x5694F0
        void InitializeWindow();  // RVA: 0x568CC0
        float get_CurrentScaleFactor();  // RVA: 0x569EA0
        void Update();  // RVA: 0x4B4660
        void CycleSize();  // RVA: 0x568B60
        void SetSize(WindowSize size);  // RVA: 0x5691E0
        void ApplyGameFrameScale();  // RVA: 0x5681B0
        void SetAlwaysOnTop(bool onTop);  // RVA: 0x569120
        void SnapToCorner(int32_t corner);  // RVA: 0x5692A0
        void ClampGameFrameToCanvas();  // RVA: 0x568950
        void ClampGameFrameContentToCanvas();  // RVA: 0x568630
        int32_t get_CurrentMonitorIndex();  // RVA: 0x569E90
        bool TryMoveToAdjacentMonitor(Vector2 direction, Vector2 outOppositeEdgePos);  // RVA: 0x569500
        Rect GetCurrentMonitorRect();  // RVA: 0x568C60
        void EnableColorKeyTransparency();  // RVA: 0x4B4660
        void SetSidePanelExtension(int32_t panelWidth);  // RVA: 0x5691B0
        void SetTooltipExtension(int32_t overflowPx);  // RVA: 0x569290
        void SetTooltipExtension(int32_t overflowPx, bool rightSide);  // RVA: 0x569290
        void RetractTooltipExtensionDeferred();  // RVA: 0x569110
        Vector2Int GetWindowPixelSize();  // RVA: 0x568C90
        Vector2Int GetWindowPosition();  // RVA: 0x5595F0
        bool IsGameFrameInUpperHalfOfScreen();  // RVA: 0x569070
        void .ctor();  // RVA: 0x569C70
        static void .cctor();  // RVA: 0x569B50
    };

    // Namespace: AutoBattle.Core
    class XPSystem
    {
    public:
        // Static fields
        // static int32_t MaxLevel;
        // static float XPMultiplierFullGame;
        // static float XPMultiplierDemo;
        // static float XPExponent;
        // static float XPScalingDecay;
    
    
        // Methods
        static float get_CurrentMultiplier();  // RVA: 0x56A2F0
        static int32_t XPForLevel(int32_t level);  // RVA: 0x56A240
        static int32_t XPNeededForNextLevel(int32_t currentLevel);  // RVA: 0x56A2B0
        static int32_t ScaleXP(int32_t baseXP, int32_t enemyLevel, int32_t playerLevel);  // RVA: 0x56A1E0
    };

} // namespace AutoBattle.Core

// Namespace: <global>
class <>c__DisplayClass54_0
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    EquippedItemInfo* ei; // 0x0010

    // Methods
    void .ctor();  // RVA: 0x4BC430
    bool <BuildSyntheticEnemyState>b__0(ItemData* d);  // RVA: 0x5679F0
};

// Namespace: <global>
class <EndBattle>d__56
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CombatManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    EnemyState* enemy; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    bool playerWon; // 0x0030
    uint8_t pad_0031[0x3]; // 0x0031
    int32_t remainingPlayerHp; // 0x0034
    uint8_t pad_0035[0x3]; // 0x0035
    BattleScreenUI* <battleUI>5__2; // 0x0038
    uint8_t pad_0039[0x7]; // 0x0039
    float <pollWaited>5__3; // 0x0040

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x560360
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x562360
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <RunCombat>d__51
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    EnemyState* enemy; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    CombatManager* <>4__this; // 0x0028
    uint8_t pad_0029[0x7]; // 0x0029
    PlayerStats playerStats; // 0x0030
    uint8_t pad_0031[0x17]; // 0x0031
    BattleScreenUI* <battleUI>5__2; // 0x0048
    uint8_t pad_0049[0x7]; // 0x0049
    int32_t <playerHp>5__3; // 0x0050
    uint8_t pad_0051[0x3]; // 0x0051
    int32_t <enemyHp>5__4; // 0x0054
    uint8_t pad_0055[0x3]; // 0x0055
    bool <isPlayerTurn>5__5; // 0x0058
    uint8_t pad_0059[0x3]; // 0x0059
    PlayerStats <playerMaxStats>5__6; // 0x005C
    uint8_t pad_005D[0x13]; // 0x005D
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> <timedRegens>5__7; // 0x0070
    uint8_t pad_0071[0x7]; // 0x0071
    float <combatElapsed>5__8; // 0x0078
    uint8_t pad_0079[0x7]; // 0x0079
    Single[][] <nextRegenAt>5__9; // 0x0080
    uint8_t pad_0081[0x7]; // 0x0081
    System.Collections.Generic.List<System.ValueTuple<System.Single,System.Int32>> <enemyTimedRegens>5__10; // 0x0088
    uint8_t pad_0089[0x7]; // 0x0089
    Single[][] <enemyNextRegenAt>5__11; // 0x0090

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x562400
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x563020
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

// Namespace: <global>
class <StartPvPBattleCoroutine>d__36
{
public:
    uint8_t pad_0000[0x10]; // 0x0000
    int32_t <>1__state; // 0x0010
    uint8_t pad_0011[0x7]; // 0x0011
    Il2CppObject* <>2__current; // 0x0018
    uint8_t pad_0019[0x7]; // 0x0019
    CombatManager* <>4__this; // 0x0020
    uint8_t pad_0021[0x7]; // 0x0021
    int32_t <myPS>5__2; // 0x0028
    uint8_t pad_0029[0x3]; // 0x0029
    float <timeout>5__3; // 0x002C
    uint8_t pad_002D[0x3]; // 0x002D
    float <elapsed>5__4; // 0x0030

    // Methods
    void .ctor(int32_t <>1__state);  // RVA: 0x4B6750
    void System.IDisposable.Dispose();  // RVA: 0x4B4660
    bool MoveNext();  // RVA: 0x563060
    Il2CppObject* System.Collections.Generic.IEnumerator<System.Object>.get_Current();  // RVA: 0x4B6700
    void System.Collections.IEnumerator.Reset();  // RVA: 0x563500
    Il2CppObject* System.Collections.IEnumerator.get_Current();  // RVA: 0x4B6700
};

namespace AutoBattle.Combat
{

    // Namespace: AutoBattle.Combat
    class CombatManager : public MonoBehaviour
    {
    public:
        uint8_t pad_0000[0x20]; // 0x0000
        GameManager* gameManager; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        Coroutine* combatCoroutine; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        bool isInCombat; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        EnemyState* currentCombatEnemy; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        CombatRuntimeEffects* activeRuntimeEffects; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        CombatRuntimeEffects* enemyRuntimeEffects; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        int32_t currentEnemyHpTracked; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        int32_t currentEnemyMaxHpTracked; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        EnemyState* cachedSectorEnemy; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int32_t cachedSectorEnemySector; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        int32_t cachedSectorEnemySlot; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        System.Action<AutoBattle.Combat.EnemyState> OnCombatStart; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        System.Action<AutoBattle.Combat.CombatTurnResult> OnCombatTurn; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Action<AutoBattle.Combat.CombatResult> OnCombatEnd; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Action<System.String,System.String> OnBattleLogMessage; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        System.Action<System.Int32> OnHealTick; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Action<System.Int32> OnEnemyHealTick; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        String[][] pvpEnemyNames; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        bool pvpQueued; // 0x00A0
        uint8_t pad_00A1[0x3]; // 0x00A1
        int32_t pvpSavedHp; // 0x00A4
        uint8_t pad_00A5[0x3]; // 0x00A5
        bool friendlyPvPStartedFromHome; // 0x00A8
    
        // Methods
        CombatRuntimeEffects* get_ActiveRuntimeEffects();  // RVA: 0x54E570
        CombatRuntimeEffects* get_EnemyRuntimeEffects();  // RVA: 0x5489B0
        int32_t get_CurrentEnemyHp();  // RVA: 0x55DC70
        int32_t get_CurrentEnemyMaxHp();  // RVA: 0x55DC80
        void Start();  // RVA: 0x55D5D0
        void OnEnable();  // RVA: 0x55A740
        void OnDisable();  // RVA: 0x55A720
        void SubscribeEvents();  // RVA: 0x55D740
        void UnsubscribeEvents();  // RVA: 0x55D880
        void StartPvEBattle();  // RVA: 0x55D1A0
        void StartArenaBattle();  // RVA: 0x55CD80
        EnemyState* PickEnemyForArena(int32_t wave);  // RVA: 0x55AB70
        void StartPvPBattle();  // RVA: 0x55D540
        IEnumerator* StartPvPBattleCoroutine();  // RVA: 0x55D4D0
        void StartFriendlyPvP(PlayerSnapshot* friendSnapshot);  // RVA: 0x55CFF0
        EnemyState* GetOrRollSectorEnemy(SectorData* sector, int32_t sectorEnemyIndex);  // RVA: 0x55A480
        EnemyState* PickEnemyForBattle(SectorData* sector, int32_t sectorEnemyIndex);  // RVA: 0x55B0F0
        int32_t PickCategoryByGaussian(int32_t categoryCount, float sectorProgress);  // RVA: 0x55A850
        EnemyColor PickColorByProgress(float sectorProgress);  // RVA: 0x55AAA0
        EnemyColor PickArenaColor(float waveProgress);  // RVA: 0x55A7B0
        float GetDropChanceByColor(EnemyColor color);  // RVA: 0x55A450
        EnemyState* GeneratePvPEnemy();  // RVA: 0x55A090
        void StartCombat(EnemyState* enemy);  // RVA: 0x55CE80
        void StopCombat();  // RVA: 0x55D6C0
        void ResolvePvPAbandon(EnemyState* enemy);  // RVA: 0x55C800
        void HandleBattleStateChange(bool isActive);  // RVA: 0x55A710
        IEnumerator* RunCombat(PlayerStats playerStats, EnemyState* enemy);  // RVA: 0x55CCE0
        ElementCategory GetPlayerWeaponElement();  // RVA: 0x55A620
        ElementCategory GetPlayerWeapon2Element();  // RVA: 0x55A530
        PlayerState* BuildSyntheticEnemyState(System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> equippedItems);  // RVA: 0x5596E0
        CombatTurnResult* ResolveAttack(PlayerStats playerStats, EnemyState* enemy, int32_t playerHp, int32_t enemyHp, bool isAttacker, int32_t playerMaxHp);  // RVA: 0x55B4E0
        IEnumerator* EndBattle(bool playerWon, EnemyState* enemy, int32_t remainingPlayerHp);  // RVA: 0x559C00
        int32_t CalculatePvEXp(EnemyState* enemy, bool isDefeat);  // RVA: 0x559B40
        ItemInstance* GenerateDropItem(EnemyState* enemy);  // RVA: 0x559E60
        ItemInstance* GenerateArenaMilestoneDrop();  // RVA: 0x559CB0
        ItemInstance* GenerateSectorCompletionBonus();  // RVA: 0x55A2F0
        void .ctor();  // RVA: 0x55D9F0
    };

    // Namespace: AutoBattle.Combat
    class CombatResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool playerWon; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        int32_t xpGained; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        ItemInstance* droppedItem; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        int32_t remainingPlayerHp; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        bool sectorCleared; // 0x0024
        bool isPvP; // 0x0025
        uint8_t pad_0026[0x2]; // 0x0026
        Il2CppString* enemyName; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        int32_t rpDelta; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t healAmount; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        ItemInstance* sectorBonusItem; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        bool leveledUp; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t newLevel; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t levelsGained; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        ItemInstance* levelUpItem; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        bool isArenaMode; // 0x0058
        uint8_t pad_0059[0x3]; // 0x0059
        int32_t arenaWave; // 0x005C
        uint8_t pad_005D[0x3]; // 0x005D
        int32_t arenaKillCount; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        bool arenaWaveMilestone; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t arenaMaxWave; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        bool arenaActivated; // 0x006C
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Combat
    class PendingAttackMod
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t remaining; // 0x0010
        uint8_t pad_0011[0x3]; // 0x0011
        float bonusDamagePct; // 0x0014
        uint8_t pad_0015[0x3]; // 0x0015
        int32_t bonusDamageFlat; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float ignoreEnemyDefPct; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        float overrideCritPct; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float critBonusPct; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        bool ignoreDefFully; // 0x0028
        bool tripleDamage; // 0x0029
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Combat
    class EveryNAttacksEffect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t everyN; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PendingAttackMod* modTemplate; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Combat
    class EveryNCritsEffect
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        int32_t everyN; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        PendingAttackMod* modTemplate; // 0x0018
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Combat
    class CombatRuntimeEffects
    {
    public:
        // Static fields
        // static int32_t SUDDEN_DEATH_THRESHOLD_TURNS;
        // static int32_t SUDDEN_DEATH_ESCALATION_TURNS;
        // static float SUDDEN_DEATH_ESCALATION_PCT;
    
        uint8_t pad_0000[0x10]; // 0x0000
        System.Collections.Generic.List<AutoBattle.Core.StatsCalculator.BelowHpEffect> belowHpEffects; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        int32_t onCritHealAmount; // 0x0018
        uint8_t pad_0019[0x3]; // 0x0019
        float onCritLifestealPct; // 0x001C
        uint8_t pad_001D[0x3]; // 0x001D
        int32_t onParryHealAmount; // 0x0020
        uint8_t pad_0021[0x3]; // 0x0021
        float firstHitAbsorbFraction; // 0x0024
        uint8_t pad_0025[0x3]; // 0x0025
        int32_t firstHitCounterDamage; // 0x0028
        uint8_t pad_0029[0x7]; // 0x0029
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.String>> everyNHitsTaken; // 0x0030
        uint8_t pad_0031[0x7]; // 0x0031
        float enemyCritDamageMultiplier; // 0x0038
        uint8_t pad_0039[0x7]; // 0x0039
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Int32,System.String>> everyNSecTempBuffs; // 0x0040
        uint8_t pad_0041[0x7]; // 0x0041
        Single[][] nextTempBuffAt; // 0x0048
        uint8_t pad_0049[0x7]; // 0x0049
        Int32[][] currentTempBuffStack; // 0x0050
        uint8_t pad_0051[0x7]; // 0x0051
        Int32[][] everyNSecMaxStack; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        int32_t tempBuffAtk; // 0x0060
        uint8_t pad_0061[0x3]; // 0x0061
        int32_t tempBuffDef; // 0x0064
        uint8_t pad_0065[0x3]; // 0x0065
        int32_t tempBuffHp; // 0x0068
        uint8_t pad_0069[0x3]; // 0x0069
        float tempBuffCritPct; // 0x006C
        uint8_t pad_006D[0x3]; // 0x006D
        float tempBuffParryPct; // 0x0070
        uint8_t pad_0071[0x7]; // 0x0071
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> pendingAttackMods; // 0x0078
        uint8_t pad_0079[0x7]; // 0x0079
        System.Collections.Generic.List<AutoBattle.Combat.EveryNAttacksEffect> everyNAttacksEffects; // 0x0080
        uint8_t pad_0081[0x7]; // 0x0081
        Int32[][] nextEveryNAttacksFireAt; // 0x0088
        uint8_t pad_0089[0x7]; // 0x0089
        System.Collections.Generic.List<AutoBattle.Combat.EveryNCritsEffect> everyNCritsEffects; // 0x0090
        uint8_t pad_0091[0x7]; // 0x0091
        Int32[][] nextEveryNCritsFireAt; // 0x0098
        uint8_t pad_0099[0x7]; // 0x0099
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> enemyDefDebuffs; // 0x00A0
        uint8_t pad_00A1[0x7]; // 0x00A1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onCritEnemyDefDebuffDescriptors; // 0x00A8
        uint8_t pad_00A9[0x7]; // 0x00A9
        int32_t onCritBonusDamage; // 0x00B0
        uint8_t pad_00B1[0x7]; // 0x00B1
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> onCritPendingModTemplates; // 0x00B8
        uint8_t pad_00B9[0x7]; // 0x00B9
        System.Collections.Generic.List<AutoBattle.Combat.PendingAttackMod> onParryPendingModTemplates; // 0x00C0
        uint8_t pad_00C1[0x7]; // 0x00C1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> tempDefTimedBuffs; // 0x00C8
        uint8_t pad_00C9[0x7]; // 0x00C9
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onParryDefTimedDescriptors; // 0x00D0
        uint8_t pad_00D1[0x7]; // 0x00D1
        System.Collections.Generic.List<System.ValueTuple<System.Int32,System.Single>> onCritDefTimedDescriptors; // 0x00D8
        uint8_t pad_00D9[0x7]; // 0x00D9
        int32_t firstHitHeal; // 0x00E0
        uint8_t pad_00E1[0x3]; // 0x00E1
        float firstHitPermanentAtkPct; // 0x00E4
        uint8_t pad_00E5[0x3]; // 0x00E5
        bool firstHitPermanentAtkActive; // 0x00E8
        uint8_t pad_00E9[0x3]; // 0x00E9
        int32_t playerAttacksMade; // 0x00EC
        uint8_t pad_00ED[0x3]; // 0x00ED
        int32_t playerCritsLanded; // 0x00F0
        uint8_t pad_00F1[0x3]; // 0x00F1
        int32_t playerHitsTaken; // 0x00F4
        uint8_t pad_00F5[0x3]; // 0x00F5
        bool firstHitConsumed; // 0x00F8
        uint8_t pad_00F9[0x3]; // 0x00F9
        float combatElapsedSec; // 0x00FC
        uint8_t pad_00FD[0x3]; // 0x00FD
        Int32[][] hitTriggerCounters; // 0x0100
        uint8_t pad_0101[0x7]; // 0x0101
        bool suddenDeathArmed; // 0x0108
        bool suddenDeathActive; // 0x0109
        bool isPvP; // 0x010A
        uint8_t pad_010B[0x1]; // 0x010B
        int32_t turnsElapsed; // 0x010C
        uint8_t pad_010D[0x3]; // 0x010D
        float permanentDefAcquiredPct; // 0x0110
    
        // Methods
        static CombatRuntimeEffects* BuildForCombat(PlayerState* state, System.Collections.Generic.List<AutoBattle.Data.ItemData> allItems, bool isPvP);  // RVA: 0x55DE80
        PendingAttackMod* AggregatePendingMods();  // RVA: 0x55DC90
        void ConsumePendingMods();  // RVA: 0x55E770
        void TickEveryNAttacksAndPush();  // RVA: 0x55FB20
        void TickEveryNCritsAndPush();  // RVA: 0x55FCA0
        void PushOnCritPendingMods();  // RVA: 0x55F270
        void PushOnParryPendingMods();  // RVA: 0x55F4B0
        static PendingAttackMod* CloneModTemplate(PendingAttackMod* src);  // RVA: 0x55E6D0
        void PushOnCritEnemyDefDebuff();  // RVA: 0x55F090
        int32_t GetActiveEnemyDefReduction();  // RVA: 0x55E840
        void PushTimedDefBuffOnParry();  // RVA: 0x55F8D0
        void PushTimedDefBuffOnCrit();  // RVA: 0x55F6F0
        int32_t GetActiveTimedDefBuff();  // RVA: 0x55E930
        void TickTemporaryBuffs();  // RVA: 0x55FE20
        System.ValueTuple<System.Single,System.Single,System.Single,System.Int32,System.Single> GetBelowHpAggregate(int32_t currentHp, int32_t maxHp);  // RVA: 0x55EA20
        System.ValueTuple<System.Single,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Single,System.ValueTuple<System.Boolean,System.Single>> GetBelowHpExtendedAggregate(int32_t currentHp, int32_t maxHp);  // RVA: 0x55ECB0
        Il2CppString* CheckEveryNHitsTakenAndConsume();  // RVA: 0x55E4E0
        float StepTurnAndGetDamageMultiplier();  // RVA: 0x55FAB0
        void .ctor();  // RVA: 0x5600A0
    };

    // Namespace: AutoBattle.Combat
    class CombatTurnResult
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        bool isPlayerAttacking; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* attackerName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* defenderName; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        int32_t damage; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        bool isCrit; // 0x002C
        bool isParried; // 0x002D
        uint8_t pad_002E[0x2]; // 0x002E
        int32_t attackerHpAfter; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        int32_t defenderHpAfter; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        ElementCategory weaponElement; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        ElementCategory weapon2Element; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        int32_t healFromEffect; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        bool suddenDeathActive; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        int32_t counterAttackDamage; // 0x0048
        uint8_t pad_0049[0x3]; // 0x0049
        int32_t enemyHealFromEffect; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t enemyCounterAttackDamage; // 0x0050
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

    // Namespace: AutoBattle.Combat
    class EnemyState
    {
    public:
        uint8_t pad_0000[0x10]; // 0x0000
        Il2CppString* name; // 0x0010
        uint8_t pad_0011[0x7]; // 0x0011
        Il2CppString* categoryName; // 0x0018
        uint8_t pad_0019[0x7]; // 0x0019
        Il2CppString* icon; // 0x0020
        uint8_t pad_0021[0x7]; // 0x0021
        EnemyColor color; // 0x0028
        uint8_t pad_0029[0x3]; // 0x0029
        int32_t hp; // 0x002C
        uint8_t pad_002D[0x3]; // 0x002D
        int32_t maxHp; // 0x0030
        uint8_t pad_0031[0x3]; // 0x0031
        float atk; // 0x0034
        uint8_t pad_0035[0x3]; // 0x0035
        float def; // 0x0038
        uint8_t pad_0039[0x3]; // 0x0039
        float crit; // 0x003C
        uint8_t pad_003D[0x3]; // 0x003D
        float parry; // 0x0040
        uint8_t pad_0041[0x3]; // 0x0041
        int32_t level; // 0x0044
        uint8_t pad_0045[0x3]; // 0x0045
        bool isPvP; // 0x0048
        bool isFriendlyPvP; // 0x0049
        uint8_t pad_004A[0x2]; // 0x004A
        int32_t xpWin; // 0x004C
        uint8_t pad_004D[0x3]; // 0x004D
        int32_t xpLose; // 0x0050
        uint8_t pad_0051[0x3]; // 0x0051
        float dropChance; // 0x0054
        uint8_t pad_0055[0x3]; // 0x0055
        System.Collections.Generic.List<AutoBattle.Steam.EquippedItemInfo> pvpEquippedItems; // 0x0058
        uint8_t pad_0059[0x7]; // 0x0059
        Il2CppString* pvpPlayFabId; // 0x0060
        uint8_t pad_0061[0x7]; // 0x0061
        int64_t pvpLastUpdatedTicks; // 0x0068
        uint8_t pad_0069[0x7]; // 0x0069
        int32_t pvpCharacterType; // 0x0070
        uint8_t pad_0071[0x3]; // 0x0071
        float pvpBattleTime; // 0x0074
        uint8_t pad_0075[0x3]; // 0x0075
        int32_t pvpRankingPoints; // 0x0078
        uint8_t pad_0079[0x3]; // 0x0079
        ElementCategory pvpWeaponElement; // 0x007C
        uint8_t pad_007D[0x3]; // 0x007D
        ElementCategory pvpWeapon2Element; // 0x0080
    
        // Methods
        void .ctor();  // RVA: 0x4BC430
    };

} // namespace AutoBattle.Combat

// Namespace: <global>
struct __StaticArrayInitTypeSize=12
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=16
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=20
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=32
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=4404
{
public:
};

// Namespace: <global>
struct __StaticArrayInitTypeSize=5411
{
public:
};

// Namespace: <global>
class <PrivateImplementationDetails>
{
public:
    // Static fields
    // static __StaticArrayInitTypeSize=4404 203C0E7D8EBA25A3C757FF19F623D5323528B7386BBD32E6A08B3E1FC9518A6A;
    // static __StaticArrayInitTypeSize=20 376326C78425410A24361EBE9BEAC70517D3FD3FA0C47072BFA401ACD395F04A;
    // static __StaticArrayInitTypeSize=5411 3BF0F59E28BFCCE649F3FD019CE9B12FFF96934FA63D803E446AFAB59F045F12;
    // static __StaticArrayInitTypeSize=32 3CC2A930571C60EE0CFE0686365C3093E362E6833C5C7F1FD4F36C687C78BBA5;
    // static __StaticArrayInitTypeSize=12 6AB9C293C18AC9C469B52BD1BB0A68DA18711BA94E45EA6E0BF79CE96CFEFD0F;
    // static __StaticArrayInitTypeSize=12 8BC5D7ED3909D5F0600333A11D97106D1724D34B786E92D842690E9E3052E409;
    // static __StaticArrayInitTypeSize=16 BAED642339816AFFB3FE8719792D0E4CE82F12DB72B7373D244EAA65445800FE;


    // Methods
    static uint32_t ComputeStringHash(Il2CppString* s);  // RVA: 0x5623A0
};

