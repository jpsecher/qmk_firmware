{ pkgs, ... }:
{
  packages = with pkgs; [
      avrdude
      pkgsCross.avr.buildPackages.gcc
  ];
  # languages.javascript = {
  #   enable = true;
  #   package = pkgs.nodejs_22;
  #   corepack.enable = true;
  # };
  enterShell = ''
    echo QMK tools available
  '';
}

