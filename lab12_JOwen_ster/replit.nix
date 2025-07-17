{ pkgs }: {
	deps = [
		pkgs.clang-tools
    pkgs.lsb-release
    pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
    pkgs.xorg.libX11.out
    pkgs.xorg.libX11.dev
    pkgs.xorg.libX11.man
    pkgs.cmake
    pkgs.gtest
    pkgs.llvm
	];
}